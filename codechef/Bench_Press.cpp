#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int mod = 1000000007;
typedef vector<int> vi;
#define pi pair<int, int>
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

void solve() {
  int n,k, i, p, q, r, count = 0, j, flag, ans = 0;
  int w, wr;
  cin >> n >> w >> wr;

  w -= wr;
  map<int, int> mp;
  f(i, 0, n) {
    cin >> p;
    mp[p]++;
  }

  for (auto itr : mp) {
    if (itr.second % 2 == 0) {
      w -= itr.second * itr.first;
    }
  }

  if (w <= 0) {
    out  "YES"<<nl;
    return;
  }
  out  "NO"<<nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}