#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
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
  int n, k, i, r, count = 0, j, flag;
  double a, b, c, d, p, q, ans = 0;
  in a >> b >> c >> d;
  p = a / b;
  q = c / d;
  cout << fixed << setprecision(12);
  ans = p / (1 - (1 - p) * (1 - q));
  out ans << "\n";
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}