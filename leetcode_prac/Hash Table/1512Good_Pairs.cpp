// hash table approach, same program in leetcode_prac/arrays folder with diff
// approach.
class Solution {
 public:
  int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> mp;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
      ans += mp[nums[i]];
      mp[nums[i]]++;  // counting the occurences & storing its value.
    }
    return ans;
  }
};
/*count the occurrence of the same elements.
For each new element nums,
there will be more count[nums] pairs,
with nums[i] == nums[j] and i < j

Time O(N)
Space O(N)
*/