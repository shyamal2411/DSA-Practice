#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int M = 1e9 + 7;
typedef vector<int> vi;
#define pi pair<int, int>
#define yes cout << 'YES' << endl;
#define no cout << 'NO' << endl;
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

void solve() {
  int n, m, k, i, p, q, r, count = 0, j, flag, ans = 0;
  in n >> m;
  map<string, string> mp;

  while (m--) {
    string s1, s2;
    in  s1 >> s2;

    if (s1.size() <= s2.size()) {
      mp[s1] = s1;
      mp[s2] = s1;
    }

    else {
      mp[s1] = s2;
      mp[s2] = s2;
    }
  }

  while (n--) {
    string str;
    in str;
    out  mp[str] << " ";
  }
  
  out nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}