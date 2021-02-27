class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int last = 0, current = 0;

    while (current < nums.size()) {
      if (nums[current] != 0) {
        swap(nums[last], nums[current]);
        last++;
      }
      current++;
    }
  }
};

/*
iterate through the code, if number !=0, then swap it , this way all the zeroes
will eventually move to rightmost corner.
*/