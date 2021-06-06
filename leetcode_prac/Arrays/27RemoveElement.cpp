class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[max] = nums[i];
        max++;
      }
    }
    return max;
  }
};