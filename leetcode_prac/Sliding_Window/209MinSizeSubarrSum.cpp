class Solution {
 public:
  int minSubArrayLen(int target, vector<int>& nums) {
    int result = INT_MAX;
    int left = 0, sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];  // go on incrementing the sum to
      // get the desired target
      while (sum >= target)
      // now if we got the sum the go into this condition
      {
        result = min(result, i + 1 - left);
        sum -= nums[left];
        left++;
      }
    }
    // if(result!=INT_MAX)
    //     return result;
    // else
    //     return 0;
    return (result != INT_MAX) ? result : 0;
  }
};