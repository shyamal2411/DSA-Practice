#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/two-sum/
//leetcode_prac/Arrays/twoSum.cpp
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
  };

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> res = twoSum(nums, target);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << endl;
}