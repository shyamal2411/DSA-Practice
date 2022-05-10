#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/combination-sum-iii/
typedef  vector<int> vi;

class Solution {
public:
    vector<vi> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vi sol;
        help(1, n, sol, k);
        return ans;
    }
    
    void help(int i, int t, vi &sol, int k){
        if(t == 0 && k == 0){
            ans.push_back(sol);
            return;
        }
        if(t < 0 || k < 0) return;
        if(i == 10) return;
     
        // skip the ith element
        help(i + 1, t, sol, k);
        
        // pick the ith element
        sol.push_back(i);
        help(i + 1, t - i, sol, k - 1);
        // backtrack
        sol.pop_back();            
    }    
};

// Code same as the Combination sum. we just need to add k as the parameter
// Refer: https://www.youtube.com/watch?v=RqTzvwyFf-o

int main(){
    Solution ss;
    int k = 3, n = 7;
    ss.combinationSum3(k, n);

}