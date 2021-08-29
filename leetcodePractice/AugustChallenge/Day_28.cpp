#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-profit-in-job-scheduling/
// https://www.youtube.com/watch?v=V59YYFPN5KA
class Solution {
public:
    #define vi vector<int>
    static bool compare(vi& a, vi& b){
        return a[1]<b[1]; //we are sorting with their 2nd value, that's why index is 1
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int n = startTime.size();
        vector<vi> v(n);
        for(int i=0;i<n;i++){
            int x=startTime[i];
            int y=endTime[i];
            int w=profit[i];
            v[i]= {x,y,w};
        }
        sort(v.begin(), v.end(), compare);
        int dp[n];
        dp[0]=v[0][2];
        
        for(int i=1;i<n;i++) /*starting from 1  because we've already used 0th index*/
        {
            int inc = v[i][2];
            int last = -1;
            int low = 0;
            int high = i-1;
            
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(v[mid][1]<=v[i][0]){
                    last = mid;
                    low = mid+1;
                }
                else
                {high = mid-1;}
            }
            if(last!=-1)
                inc+=dp[last];
            int exc=dp[i-1];
            dp[i]=max(inc, exc);
        }
        return dp[n-1];
    }
};

int main(){
    Solution ss;
    vector<int> startTime = {1,2,3,3};
    vector<int> endTime = {3,4,5,6};
    vector<int> profit = {50,10,40,70};
    int res = ss.jobScheduling(startTime, endTime, profit);
    cout << res << endl;
    return 0;
}