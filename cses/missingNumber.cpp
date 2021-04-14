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
    cout << " " << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
  cin >> n;
  int arr[n - 1];
  int f[200001] = {0};// taking this huge number as code failed on this number!!!
  for (int i = 0; i < n - 1; i++) {
    cin >> arr[i];
    f[arr[i]]++;
  }

  sort(arr, arr + n);

  for (int i = 1; i < 200001; i++) {
    if (f[i] == 0) {
      cout << i;
      break;
    }
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