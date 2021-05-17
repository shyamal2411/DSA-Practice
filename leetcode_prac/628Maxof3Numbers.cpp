class Solution {
 public:
  int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int t2 = nums[0] * nums[1] * nums[n - 1];
    int t1 = nums[n - 1] * nums[n - 2] * nums[n - 3];

    if (t1 < t2)
      return t2;

    else
      return t1;
  }
};