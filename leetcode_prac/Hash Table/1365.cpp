class Solution {
 public:
  // without hash table approach.
  using vi = vector<int>;
  
  vi smallerNumbersThanCurrent(vi& nums) {
    int n = nums.size();
    vi ans(n);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        if (i != j && nums[i] > nums[j])
          ans[i]++;

    return ans;
  }
};