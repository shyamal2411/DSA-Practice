class Solution {
 private:
  const int m = 1e9 + 7;
  int onehelp(char c) {
    if (c == '*')
      return 9;
    return (c != '0');
  }

  int twohelp(char c1, char c2) {
    if (c1 == '*') {
      if (c2 == '*')
        return 15;
      return (c2 < '7') ? 2 : 1;
    }
    if (c1 == '0')
      return 0;
    if (c1 == '1') {
      return (c2 != '*') ? 1 : 9;
    }
    if (c1 == '2') {
      if (c2 == '*')
        return 6;
      return (c2 < '7');
    }
    return 0;  // c2 > '2'
  }

 public:
  int numDecodings(string s) {
    if (s[0] == '0')
      return 0;
    long x = 1, y = s[0] != '*' ? 1 : 9;
    long ans = y;
    for (int i = 1; i < s.size(); i++) {
      ans = (x * twohelp(s[i - 1], s[i]) + y * onehelp(s[i])) % m;
      x = y, y = ans;
    }
    return ans;
  }
};