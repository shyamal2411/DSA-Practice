#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/remove-covered-intervals/
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int x = intervals[0][0];
        int y = intervals[0][1];
        
        int ans = 1;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > x && intervals[i][1] > y)
                ans++;
            
            if(intervals[i][1] > y){
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> v{{1,2},{1,4},{3,4}};
    cout<<s.removeCoveredIntervals(v)<<endl;
    return 0;
}