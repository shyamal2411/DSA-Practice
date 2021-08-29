/*
https://leetcode.com/contest/biweekly-contest-54/problems/find-the-student-that-will-replace-the-chalk/
 */

class Solution {
 public:
  using ll = long long;
  int chalkReplacer(vector<int>& chalk, int k) {
    ll ans = 0;

    for (auto itr : chalk) {
      ans += itr;
    }

    ll res = k % ans;

    for (ll i = 0; i < chalk.size(); i++) {
      if (chalk[i] > res) {
        return i;
      }
      res -= chalk[i];
    }
    return chalk.size();
  }
};