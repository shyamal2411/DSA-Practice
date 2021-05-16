class Solution {
 public:
  string sortSentence(string s) {
    map<int, string> map;

    string ans = "";
    string flag = "";
    int n = s.size();

    for (int i = 0; i < n; i++) {
      if (s[i] == ' ') {
        map[s[i - 1] - '0'] = flag.substr(0, flag.size() - 1);
        flag = "";
      }

      else
        flag += s[i];
    }

    map[flag[flag.size() - 1] - '0'] = flag.substr(0, flag.size() - 1);

    for (int i = 0; i < map.size(); i++) {
      ans += map[i];
      if (i != map.size() - 1 && i != 0)
        ans += ' ';
    }

    return ans;
  }
};

// BIWEEKKLY CONTEST 52
// https://leetcode.com/contest/biweekly-contest-52/problems/sorting-the-sentence/