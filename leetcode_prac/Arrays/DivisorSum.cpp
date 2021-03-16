#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
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
  int n, k, t, i, p, q, r, s, count = 0, j, flag;

  int d;
  cin >> n;

  for (int i = 1; i < n; i++) {
    d = n % i;
    if (d == 0)
      count += i;
  }

  if (count == n)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);
  int t;
  in t;
  while (t--) {
    solve();
  }
}