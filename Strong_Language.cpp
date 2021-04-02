#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
#define nl << endl
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
  int n, k, t, i, p, q, r, count = 0, j, flag;
  cin >> n >> k;

  string str;
  cin >> str;

  set<int> s;
  f(i, 0, n) {
    if (str[i] != '*') {
      s.insert(i);
    } /*couting number of * in string */
  }

  int temp = 0;

  if (s.size() == 0) {
    out "YES" nl;
    return;
  }  // if no star then cout yes

  for (auto itr : s) {
    // cout<<itr<<" ";
    if (itr - temp - 1 >= k) {
      out "YES" nl;
      return;
    }
    temp = itr;
  }

  if (n - *s.rbegin() - 1 >= k) {
    out "YES" nl;
    return;
  }

  out "NO" nl;
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