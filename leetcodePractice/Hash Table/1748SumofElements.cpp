class Solution {
 public:
  int sumOfUnique(vector<int>& nums) {
    int sum = 0;
    map<int, int> mp;  // map for storing values & occurences.

    for (auto x : nums)
      mp[x]++;  // add unique values

    for (auto m : mp) {
      if (m.second ==
          1)  // unique value is 1 obviously, so if second == 1, then add them
        sum += m.first;
    }
    return sum;
  }
};