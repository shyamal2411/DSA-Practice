class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int count = 0, r;
    for (int i = 0; i < n; i++) {
      if (count == 0)
        r = nums[i];
      if (r == nums[i])
        count++;
      else
        count--;
    }
    return r;
  }
};