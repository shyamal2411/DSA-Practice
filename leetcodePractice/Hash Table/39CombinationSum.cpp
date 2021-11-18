#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombi(0, target, candidates, ans, ds);
        return ans;
    }
    
    void findCombi(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>& ds){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
        }
        return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            findCombi(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }
        findCombi(ind+1, target, arr, ans, ds);
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,3,6,7};
    vector<vector<int>> ans = s.combinationSum(arr, 7);
    for(auto i: ans)
        for(auto j: i)
            cout<<j<<" ";
    cout<<endl;
    return 0;
}