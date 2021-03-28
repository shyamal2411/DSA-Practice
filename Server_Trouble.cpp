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
  int n, k, t, i, p, q, r, s, count = 0, j, flag;
  cin >> n >> k;

  int ans = n / 2;
  if (k == n) {
    cout << 1 << " " << n << endl;
    return;
  }

  if (k < ans) {
    int temp1 = (n + k - 1) / k;
    int temp2 = n / k;

    cout << temp1 << " " << temp2 << endl;
    return;
  }

  if (k == ans) {
    if (n % 2 == 0) {
      cout << 2 << " " << ans << endl;
    } else {
      cout << 3 << " " << 1 << endl;
    }
    return;
  }

  if (k > ans) {
    if (n % 2 == 1) {
      k--;
    }
    int temp = k - ans;
    cout << 2 << " " << ans - temp << endl;
    return;
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