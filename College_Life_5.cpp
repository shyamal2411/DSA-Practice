#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define sc second
#define in cin >>
#define out cout <<

void solve() {
  int n, m, k, t, i, p, q, r, s, count = 0, j, flag;

  cin >> n >> m;
  map<int, int> vc;

  f(i, 0, n) {
    int x;
    cin >> x;
    vc[x] = 0;
  }

  f(i, 0, m) {
    int x;
    cin >> x;
    vc[x] = 1;
  }

  flag = 0;
  int ans = 0;
  for (auto itr : vc) {
    if (itr.sc != flag) {
      ans++;
      flag ^= 1;
    }
  }

  cout << ans << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}