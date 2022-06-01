#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/running-sum-of-1d-array/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans = {nums[0]};
        
        for(int i = 1; i < nums.size(); i++)
            ans.push_back(ans.back() + nums[i]);
        
        return ans;
    }
};

int main(){
    Solution ss;
    // vector<int> nums = {1,2,3,4};
    vector<int> nums = {1,1,1,1,1};
    vector<int> ans = ss.runningSum(nums);
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}