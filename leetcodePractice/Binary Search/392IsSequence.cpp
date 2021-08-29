class Solution {
 public:
  bool isSubsequence(string s, string t) {
    int m = s.size();
    int n = t.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
      if (s[j] == t[i])
        j++;
    }
    return j == m;
  }
};

// This was asked in Cognizant test of Techgig.