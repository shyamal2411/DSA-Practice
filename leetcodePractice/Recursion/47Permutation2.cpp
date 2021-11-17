#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/permutations-ii/
class Solution {
public:
    vector<vector<int>> ans;
    
    void permute(vector<int> &nums, int i){
        if(i == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=i;j<nums.size();j++){
            if(s.find(nums[j])!=s.end())
                continue;
            s.insert(nums[j]);
            swap(nums[i], nums[j]);
            permute(nums, i+1);
            swap(nums[j], nums[i]);
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       permute(nums, 0);
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3};
    Solution s;
    vector<vector<int>> ans = s.permuteUnique(nums);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
            }
    cout<<endl;}
    return 0;
}