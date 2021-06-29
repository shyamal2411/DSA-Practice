class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          vec.push_back(i);
          vec.push_back(j);
        }
      }
    }
    return vec;
  }
  // Optimized approach -used  unordered map to optimize
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    // create map, find the element pair and return them
    for (int i = 0; i < nums.size(); i++) {
      if (mp.find(target - nums[i]) != mp.end()) {
        return {mp[target - nums[i]], i};
      }
      mp[nums[i]] = i;  // update map
    }
    return {};
  }
};
// previous approach was O(n^2) in time
// this is O(n).

/*https://leetcode.com/problems/two-sum */