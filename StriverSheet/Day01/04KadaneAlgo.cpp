class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maximum = INT_MIN;  // initialize max with minimum value
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];               // add element in sum,
      maximum = max(sum, maximum);  // initialize maximum with max of both
      if (sum <
          0)  // if we get any -ve value of sum, then reinitialize sum to 0.
        sum = 0;
    }
    return maximum;
  }
};