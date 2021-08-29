class Solution {
 public:
  string frequencySort(string s) {
    unordered_map<char, int> mp;

    for (auto i : s) {
      mp[i]++;
    }
    s = "";

    vector<pair<int, char>> vec;

    for (auto i : mp) {
      vec.push_back({i.second, i.first});
    }

    sort(vec.begin(), vec.end(), greater<pair<int, char>>());

    for (auto i : vec) {
      s += string(i.first, i.second);
    }

    return s;
  }
};