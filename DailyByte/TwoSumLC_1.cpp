/*
This question is asked by Google. Given an array of integers, return whether or
not two numbers sum to a given target, k. Note: you may not sum a number with
itself.

Ex: Given the following...

[1, 3, 8, 2], k = 10, return true (8 + 2)
[3, 9, 13, 7], k = 8, return false
[4, 2, 6, 5, 2], k = 4, return true (2 + 2)
*/
// SAME QUESTION ON LEETCODE- 1.TWO SUM (FOR REFERENCE)
class Solution {
 public:
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