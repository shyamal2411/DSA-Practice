#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<

void solve() {
  int i,n;
  cin >> n;

  int a[n];
  read(a, n);

  int sum = 0;

  f(i, 0, n) {
    int x;
    cin >> x;

    f(i, 0, x) {
      int y;
      cin >> y;
      sum += y;
    }

    sum -= (x - 1) * a[i];
  }
  cout << sum << "\n";
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