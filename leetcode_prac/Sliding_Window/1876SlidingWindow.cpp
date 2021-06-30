class Solution {
 public:
  int countGoodSubstrings(string s) {
    if (s.size() < 3)
      return 0;

    int i, count = 0, n = s.size();
    for (i = 0; i < n - 2; i++)
      if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
        count++;

    return count;
  }
};