#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define nl endl
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
#define first fr
#define second sc

int solve() {
  int x, y, z, a, b, c, n, k, t, i, p, q, r, count = 0, j, flag;
  in a >> b >> c;
  x = (a + b - c) / 2;
  y = (b + c - a) / 2;
  z = (a + c - b) / 2;

  if ((a + b - c) % 2 != 0 || (b + c - a) % 2 != 0 || (a + c - b) % 2 != 0 ||
      x < 0 || y < 0 || z < 0) {
    cout << "Impossible" << endl;
    return 0;
  }

  cout << x << " " << y << " " << z << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  // in t;
  while (t--) {
    solve();
  }
}