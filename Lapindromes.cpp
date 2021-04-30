#include <bits/stdc++.h>
#include <algorithm>
#include <string>
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

void solve2() {
  int n, k, t, i, p, q, r, s, count = 0, j, flag;
  string str;
  in str;
  n = str.length();
  i = 0, j = n - 1;
  while (i < j) {
    if (str[i] != str[j])
      cout << "NO" << nl;

    else
      cout << "YES" << nl;
    i++;
    j--;
  }
}

void solve() {
  int n, k, t, i, p, q, r, s, count = 0, j, flag;
  string str, s1, s2;
  in str;
  n = str.length();
  f(i, 0, n / 2) {
    s1 = s1 + str[i];
    s2 = s2 + str[n - 1 - i];
  }
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1 == s2)
    out "YES" << nl;
  else
    out "NO" << nl;
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