#include <bits/stdc++.h>
using namespace std;

#define int long long
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
  int a, b, c;
  int p, q, r;

  cin >> a >> b >> c;
  cin >> p >> q >> r;

  int p1 = 0, p2 = 0;

  if (a > p) {
    p1++;
  } else {
    p2++;
  }

  if (b > q) {
    p1++;
  } else {
    p2++;
  }

  if (c > r) {
    p1++;
  } else {
    p2++;
  }

  if (p1 > p2) {
    cout << "A\n";
  } else {
    cout << "B\n";
  }
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}