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

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
  cin >> n;

  n++;
  while (true) {
    set<int> s;
    string str = to_string(n);
    // cout << str <<endl; printing from 1988 to 2013.
    f(i, 0, str.size()) { s.insert(str[i] - '0'); }

    if (s.size() == 4) {
      cout << n << "\n";
      return;
    }
    n++;
  }
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