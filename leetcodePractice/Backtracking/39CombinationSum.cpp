#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/combination-sum/
class Solution {
public:
    typedef vector<int> vi;
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vi> ans;
        vi subset;
        help(0, cand, target, subset, ans, 0);
        
        return ans;
    }
    
    void help(int i, vi &cand, int target, vi &subset, vector<vi> &ans, int sum){
        if(target == sum){
            ans.push_back(subset);
            return;
        }
        if(i>=cand.size() || sum > target){ return; }
        
        subset.push_back(cand[i]);
        help(i, cand, target,  subset, ans, sum + cand[i]);
        subset.pop_back(); //backtrack 
        
        help(i+1, cand, target, subset, ans, sum);
    }
};

int main(){
    Solution ss;
    // vector<int> nums = {2,3,6,7};
    vector<int> nums = {2,3,5};
    for(auto i: ss.combinationSum(nums, 8)){
        for(auto j: i) cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}