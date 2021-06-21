// didn't know bit manipulation, so couldn't solve.
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
      ans ^= nums[i];
    return ans;
  }
};

/*This XOR operation works because it's like XORing all the numbers by itself.
So if the array is {2,1,4,5,2,4,1} then it will be like we are performing this
operation

((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5.*/