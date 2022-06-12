#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        
        for(auto interval: intervals){
        if(merged.empty() || merged.back()[1] < interval[0])
            merged.push_back(interval);
        else
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
        return merged;
    }
};


int main(){
    Solution ss;
    vector<vector<int, int>> intervals = {{1,3}, {2,6}, {8, 10}, {15, 18}};
    // vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = ss.merge(intervals);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}