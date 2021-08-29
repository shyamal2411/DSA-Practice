class Solution {
 public:
  bool checkPossibility(vector<int>& nums) {
    int n = nums.size();  // if there's only 1 element, then its true
    if (n == 1) {
      return true;
    }

    int flag = 0;
    for (int i = 1; i < n; i++) {
      if (nums[i] < nums[i - 1]) {
        // go on checking if the prev is smaller of not
        if (flag != 0) {
          return false;
        }
        flag = i;
      }
    }
    if (flag == 0 || flag == 1 || flag == n - 1)
      return true;

    if ((nums[flag - 1] > nums[flag + 1]) && (nums[flag - 2] > nums[flag]))
      return false;

    return true;
  }
};