class Solution {
 public:
  int thirdMax(vector<int>& nums) {
    int i, size = nums.size();

    if (size < 3)
      return max(nums[i], nums[i + 1]);

    int first = nums[0];
    for (i = 0; i < size; i++) {
      if (nums[i] > first)
        first = nums[i];
    }

    int second = INT_MIN;
    for (i = 0; i < size; i++) {
      if (nums[i] > second && nums[i] < first)
        second = nums[i];
    }

    int third = INT_MIN;
    for (i = 0; i < size; i++) {
      if (nums[i] > third && nums[i] < second)
        third = nums[i];
    }

    return third;
  }
};