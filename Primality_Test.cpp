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
  int n, k, i, p, q, r, count = 0, j, flag, ans;
  in n;
  if (n == 1)
out "no"<<nl;
  else {
    for (i = 2; i < n; i++)
      if (n % i == 0)
        count++;
    if (count > 0)
      out "no"<<nl;
    else
out "yes"<<nl;
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