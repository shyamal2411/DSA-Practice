#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define nl "\n"
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
  long long int D, d, p, q;
  long int ans = 0;
  in D >> d >> p >> q;
  // number of days of AP
  int days = (int)D / d;
  // arithmetic progression formula
  //  a= a1+ (n-1)d

  // Standard Sum of arithmetic prog. formula
  ans += (d * ((days) * ((2 * p) + (days - 1) * q))) / 2;
  ans += (D % d) * (p + (days * q));  // rate of printing in remaining days
  cout << ans << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}