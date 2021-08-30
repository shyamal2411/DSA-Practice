#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        help(nums, 0, ans);
        return ans;
    }
    
    void help(vector<int>& nums, int begin, vector<vector<int>> &ans){
        if(begin>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=begin;i<nums.size();i++){
            swap(nums[begin], nums[i]);
            help(nums, begin+1, ans);
            
            //reset
            swap(nums[begin], nums[i]);
        }
    }
};
//2nd APPROPROACH
class Solutionn {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        ans.push_back(nums);
        
        while(next_permutation(nums.begin(), nums.end())){
            ans.push_back(nums);
        }
        return ans;
    }
};
// next permutation: 
// https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/

//3rd APPROACH - TLE ELIMINATORS DAILY TASK
class Solution3 {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> per;
        permuteHelp(nums, 0, per);
        return per;
    }
    void permuteHelp(vector<int> nums, int i, vector<vector<int>>& per){
        if(i==nums.size()){
            per.push_back(nums);
        }
        else{
            for(int j=i;j<nums.size();j++){
                swap(nums[i], nums[j]);
                permuteHelp(nums, i+1, per);
            }
        }
    }
};


int main(){
    Solutionn Sol;
    vector<int> nums{1,2,3};
    vector<vector<int>> ans=Sol.permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}