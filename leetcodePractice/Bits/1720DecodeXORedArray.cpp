class Solution {
 public:
  vector<int> decode(vector<int>& encoded, int first) {
    vector<int> ans = {first};
    for (auto& itr : encoded) {
      ans.push_back(first ^= itr);
    }
    return ans;
  }
};