#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/range-addition-ii/
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int p=ops.size();
        if(p==0) return n*m;
        int min_row=1e5, min_col=1e5;
        
        for(auto x:ops){
            min_row=min(min_row, x[0]);
            min_col=min(min_col, x[1]);
        }
        int ans=min_row*min_col;
        return ans;
    }
};

int main(){
    Solution ss;
    int m=3, n=3;
    vector<vector<int>> ops;
    ops.push_back({2,2});
    ops.push_back({3,3});
    cout<<ss.maxCount(m, n, ops);
    return 0;
}