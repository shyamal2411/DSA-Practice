#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int long long
#define nl endl
const int mod = 1000000007;
typedef vector<int> vi;
#define pi pair<int, int>
#define f(i, p, n) for (int i = p; i < n; i++)
#define rf(i, p, n) for (int i = n - 1; i >= p; i--)
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
  int flag1, flag2, x, y, p, q, n, m, k, i, count = 0, j, flag, ans = 0;
  cin >>n >> m;
  cin>> x >> y;
  cin >>p >> q;

  flag1 = max(n - p, m - q);
  flag2 = n - x + m - y;

  if (flag1 < flag2) {
    cout<< "NO\n";
    return;
  }

  else {
    cout<< "YES\n";
    return;
  }
}

int32_t main() {
  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}