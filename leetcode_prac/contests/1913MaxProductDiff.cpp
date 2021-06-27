class Solution {
 public:
  int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int ans = 0;
    int n = nums.size();
    ans = (nums[0] * nums[1]) - (nums[n - 2] * nums[n - 1]);
    return ans;
  }
};