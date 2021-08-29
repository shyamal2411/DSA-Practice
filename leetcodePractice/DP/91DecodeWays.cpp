#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i, a, n) for (int i = a; i < n; i++)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i] << " ";
#define in cin >>
#define out cout <<

class Solution {
 public:
  int numDecodings(string s) {
    /*Recursion O(2^n). A char may be decoded alone or by pairing with the next
     * char.
     */
    return s.empty() ? 0 : numDecodings(0, s);
  }

  int numDecodings(int p, string& s) {
    int n = s.size();
    if (p == n)
      return 1;
    if (s[p] == '0')
      return 0;

    int ans = numDecodings(p + 1, s);
    if (p < n - 1 && (s[p] == '1' || (s[p] == '2' && s[p + 1] < '7')))
      ans += numDecodings(p + 2, s);
    return ans;
  }

  int numsDecoding(string s) {
    /*dp O(n) time and space, this can be converted from #2 with copy and paste.
     */
    int n = s.size();
    vi dp(n + 1);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == '0')
        dp[i] = 0;
      else {
        dp[i] = dp[i + 1];
        if (i < n - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7'))
          dp[i] += dp[i + 2];
      }
    }
    return s.empty() ? 0 : dp[0];
  }

  int numDecoding3(string s) {
    /*dp wth constant space*/
    int p = 1, pp, n = s.size();
    for (int i = n - 1; i >= 0; i--) {
      int cur = s[i] == '0' ? 0 : p;

      if (i < n - 1 && (s[i] == '1' || s[i] == '1' && s[i + 1] < '7'))
        cur += pp;
      pp = p;
      p = cur;
    }
    return s.empty() ? 0 : p;
  }
};

void solve() {
  int n, k;
  string s;
  cin >> s;
  Solution ss;
  cout << ss.numsDecoding(s) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}
