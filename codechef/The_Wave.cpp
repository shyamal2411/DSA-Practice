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
  int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
  in n >> q;
  vi arr(n);
  read(arr, n);
  sort(arr.begin(), arr.end());
  string s;//to store +ve, -ve

//for q queries
  while (q--) {
    in p;
    ans = lower_bound(arr.begin(), arr.end(), p) - arr.begin();
    if (arr[ans] == p) {
      s = '0';
    } else if (ans % 2 == 0) {
      s = "POSITIVE";
    } else {
      s = "NEGATIVE";
    }
    out s << nl;
  }
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}