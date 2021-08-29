class Solution {
 public:
  int help(vector<int>& s, vector<int>& t) {
    int sl = s.size();
    int tl = t.size();
    vector<vector<int>> v(sl + 1, vector<int>(tl + 1, 0));
    int maxx = 0;
    for (int i = 1; i <= sl; i++) {
      for (int j = 1; j <= tl; j++) {
        if (s[i - 1] == t[j - 1])
          v[i][j] = v[i - 1][j - 1] + 1;
        maxx = max(maxx, v[i][j]);
      }
    }
    return maxx;
  }
  int findLength(vector<int>& nums1, vector<int>& nums2) {
    return help(nums1, nums2);
  }

  // NEAT APPROACH
  int findLength(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size(), ans = 0;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
        if (nums1[i - 1] == nums2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
          ans = max(ans, dp[i][j]);
        }
      }
    }
    return ans;
  }
};
