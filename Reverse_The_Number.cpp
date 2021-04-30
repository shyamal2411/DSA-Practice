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

void solve() {
  int rev = 0, rem, n, k, t, i, p, q, r, s, count = 0, j, flag;
  cin >> n;
  while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
    cout<<rev<<endl;
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