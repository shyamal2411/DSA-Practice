#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/non-overlapping-intervals/
class Solution {
public:
    static bool comp(vector<int> &el1, vector<int> &el2){
    return el1[1]<el2[1];    
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        vector<int> temp = intervals[0];
        int ans = 0;
        for(int i=1;i<intervals.size();i++){
            if(temp[1]>intervals[i][0])
                ans++;
            else
                temp = intervals[i];
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3},{5,6}};
    cout<<ss.eraseOverlapIntervals(intervals);
    return 0;
}