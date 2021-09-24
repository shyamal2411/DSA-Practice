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
#define in cin >>
#define out cout <<

void solve() {
  int x1, x2, w1, w2, m, n, k, t, i, p, q, r, s, count = 0, j, flag;
  cin >> w1 >> w2 >> x1 >> x2 >> m;

  int lo = x1 * m;
  int high = x2 * m;

  int dif = w2 - w1;

  if (dif >= lo && dif <= high) {
    cout << "1\n";
  } else {
    cout << "0\n";
  }
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