class Solution {
 public:
  int getMinDistance(vector<int>& nums, int target, int start) {
    int count = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == target) {
        count = min(count, abs(i - start));
      }
    }
    return count;
  }
};