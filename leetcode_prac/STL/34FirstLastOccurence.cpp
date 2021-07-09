class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v;
    // 0 can't be used here, -1 is mandatory
    int first = -1, last = -1, n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums[i] == target && first == -1)
        first = i;

      if (nums[i] == target && first != -1)
        last = i;
    }
    v.push_back(first);
    v.push_back(last);

    return v;
  }
};