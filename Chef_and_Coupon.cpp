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
  int d, c;
  cin >> d >> c;

  int sum1 = 0;
  int sum2 = 0;

  f(i, 0, 3) {
    int x;
    cin >> x;
    sum1 += x;
  }

  f(i, 0, 3) {
    int x;
    cin >> x;
    sum2 += x;
  }

  int temp = 0;

  if (sum1 >= 150) {
    temp++;
  }
  if (sum2 >= 150) {
    temp++;
  }

  if (temp) {
    if (sum1 + sum2 + c < sum1 + sum2 + temp * d) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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