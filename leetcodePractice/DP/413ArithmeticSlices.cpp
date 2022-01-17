#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/arithmetic-slices/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0; // stated in question
        int i,ans=0, current=0, lastDiff=nums[1]-nums[0];
        int dp[n];
        for(i = 2; i < n; i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                dp[i] = dp[i-1] + 1;
                ans += dp[i];
            }
        }
        return ans;
    }
};

// https://youtu.be/rSi4MpGEz1M

int main(){
    Solution s;
    vector<int> arr = {1,2,3,4};
    cout<<s.numberOfArithmeticSlices(arr);
    return 0;
}