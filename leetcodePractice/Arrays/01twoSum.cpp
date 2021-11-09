#include<bits/stdc++.h>
using namespace std;
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

class Solutionn {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()){
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

/*https://leetcode.com/problems/two-sum */

int main() {
  //vector<int> nums = {2, 7, 11, 15};
  vector<int> nums = {3, 2, 4};
  int target = 6;
  Solution mySolution;
  vector<int> vec = mySolution.twoSum(nums, target);
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;
  return 0;
}