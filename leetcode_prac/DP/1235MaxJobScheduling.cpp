#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-profit-in-job-scheduling/

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)     {
        int i, n=profit.size();
        vector<vector<int>> ans;
        vector<int> dp;
        
        for(i=0;i<n;i++){
            ans.push_back({endTime[i], startTime[i], profit[i]});
        }
        sort(ans.begin(), ans.end());
        dp.push_back(ans[0][2]);
        int index, temp;
        for(i=1;i<n;i++){
            index=-1;
            for(int j=i-1;j>=0;j--)
             {
                 if(ans[j][0]<=ans[i][1])
                 {
                     index = j;
                     break;
                 }
             }
             // Using Binary Search O(nlogn)
//             int l=0,h=i-1;
//             while(l<=h)
//             {
//                 int m = (l+h)/2;
//                 if(ans[m][0]<=ans[i][1])
//                 {
//                     if (ans[m+1][0] <= ans[i][1]) 
//                         l = m + 1; 
//                     else
//                     {
//                         index = m;
//                         break;
//                     } 
//                 }
//                 else
//                     h = m-1;
//             }
            if(index!=-1)
                temp=dp[index] + ans[i][2];
            else
                temp=ans[i][2];
            dp.push_back(max(temp,dp[i-1]));
        }
        return dp[n-1];
    }
};
//main function
int main()
{
    Solution s;
    vector<int> startTime={1,2,3,3};
    vector<int> endTime={4,5,6,7};
    vector<int> profit={5,6,7,8};
    cout<<s.jobScheduling(startTime, endTime, profit);
    return 0;
}
