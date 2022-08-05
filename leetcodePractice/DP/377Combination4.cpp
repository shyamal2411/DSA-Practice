#include<bits/stdc++.h> 
using namespace std;

class CombinationSumIVReverseBacktrackingDFS {
    public:
        int combinationSum4(vector<int>& nums, int target) {
            if (nums.empty()) return 0;
            return combinationSum4(nums, 0, target);
        }
    private:
        int combinationSum4(vector<int>& nums, int i, int target) {
            if (i >= nums.size()) return 0;
            if (0 == target) return 1;
            int ans = 0;
            for (int s = 0; s < nums.size(); s++) {
                if (target - nums[s] >= 0) {
                    target -= nums[s];
                    ans += combinationSum4(nums, s, target);
                    target += nums[s];
                }
            }
            return ans;
        }
    };
    

    class CombinationSumIVRecursive {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if (nums.empty())
            return 0;
        if (target == 0)
            return 1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            if (target >= nums[i])
                ans += combinationSum4(nums, target - nums[i]);
        return ans;
    }
};


class CombinationSumIVRecursive {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if (nums.empty())
            return 0;
        if (target == 0)
            return 1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            if (target >= nums[i])
                ans += combinationSum4(nums, target - nums[i]);
        return ans;
    }
};

class Solution {
  public:
    
    int combinationSum4(vector<int> &nums, int target) {
        if (nums.empty()) return 0;
        vector<int> dp(target + 1, -1);
        dp[0] = 1;
        return help(nums, target, dp);
    }
    
    int help(vector<int> &nums, int target, vector<int> &dp) {
        if (target < 0) return 0;
        if (target == 0) return 1;
        if (dp[target] != -1) return dp[target];
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            if (target >= nums[i])
                ans += help(nums, target - nums[i], dp);
        return dp[target] = ans;
    }
};


int main(){
    Solution ss;
    vector<int> vec = {1,2,3};
    cout<<ss.combinationSum4(vec, 4);
    return 0;
}