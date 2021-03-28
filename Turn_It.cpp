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
  int n, k, t, i, p, q, r, count = 0, j, flag;
  int u, v, a, s;
  cin >> u >> v >> a >> s;

  if (u <= v) {
    cout << "Yes\n";
    return;
  }

  int temp = 2 * a * s;

  double z = u * u - temp;
  double ans = sqrt(z);

  if (ans <= v) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
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

/*
  My error was,I didn't take sqrt in first attempt,
  also take help of these multiple integers to handle summing up roots & squares
*/