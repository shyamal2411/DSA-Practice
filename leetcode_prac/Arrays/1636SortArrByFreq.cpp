class Solution {
 public:
  // static has to be written otherwise it throws error
  static bool help(pair<int, int>& a, pair<int, int>& b) {
    return (a.second == b.second) ? a.first > b.first : a.second < b.second;
  }

  vector<int> frequencySort(vector<int>& nums) {
    if (nums.size() == 1)
      return nums;

    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
      mp[nums[i]]++;

    vector<pair<int, int>> freq;
    for (auto it : mp) {
      freq.push_back(it);
    }

    sort(freq.begin(), freq.end(), help);

    vector<int> ans;
    for (auto v : freq) {
      for (int i = 0; i < v.second; i++) {
        ans.push_back(v.first);
      }
    }
    return ans;
  }
};