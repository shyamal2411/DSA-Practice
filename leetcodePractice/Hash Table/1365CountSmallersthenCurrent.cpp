// HASH MAP APPROACH
class Solution {
 public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    map<int, int> mp;
    vector<int> vec = nums;
    int n = nums.size();

    // TC: O(nlogn)
    sort(vec.begin(), vec.end());

    // TC: O(n)
    // putting values in hash map according to their values corresponding to
    // their places in nums
    for (int i = n - 1; i >= 0; i--)
      mp[vec[i]] = i;

    // TC: O(n)
    // saving the results again in nums, for the sake of space complexity
    for (int i = 0; i < n; i++)
      nums[i] = mp[nums[i]];

    return nums;
  }
};

// without hash table approach.

class Solution {
 public:
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