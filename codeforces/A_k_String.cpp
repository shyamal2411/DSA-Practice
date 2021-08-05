#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
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
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

int solve() {
  int n, k, i, p, q, r, j, flag, ans = 0;
  cin >> n;
  string s;
  int cnt[40] = {};
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    cnt[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
    if (cnt[i] % n) {
      cout << -1 << endl;
      return 0;
    }
  for (int j = 0; j < n; j++)
    for (int i = 0; i < 26; i++)
      for (int k = 0; k < cnt[i] / n; k++)
        cout << (char)(i + 'a');

  cout << endl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}