/*
assume your initial array is [1,2,3,4,5,6]:
if you prepare a result vector res of the required size (same as nums) and set
the first value to 1 (the neuter element in multiplications), you can go on up
to the end setting each cell to be the product of the previous one, plus the
matching previous slot in nums. In our case, after the first pass, we will have
[1,1,2,6,24,120] - and please note that the last element is already of the
expected value. Now, for the second pass, we have to start from the opposite
direction (I started from left first, so I will go right now - you can try the
other way around, if you want some extra challenge) and multiply each value
(other than the rightmost: we are already fine with that) by prod, initially set
to be of the value of the last element (so, in our case, the "previous" element,
since we start from the penultimate one, in the same guise we started from the
second element in the first loop) and then gradually incremented by nums[i]
AFTER we have multiplying the ith cell. The second loop will give us
[720,360,240,180,144,120], which is precisely what we wanted, so it means we are
done and can now return res :)
*/

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(), prod = nums[n - 1];
    vector<int> ans(n);

    if (!n)
      return ans;  // edge case
    // initialising  ans & using it for first pass
    ans[0] = 1;

    // each cell will be product of the previous & matching previous value
    for (int i = 1; i < n; i++)
      ans[i] = ans[i - 1] * nums[i - 1];

    // second pass, from the right
    for (int i = --n - 1; i >= 0; --i) {
      ans[i] *= prod;
      prod *= nums[i];
    }
    return ans;
  }
};