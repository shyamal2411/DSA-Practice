#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
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
#define first fr
#define second sc

void solve() {
  int n, m, x, y, k, i, p, q, r, count = 0, ucount = 0, j, flag, ans = 0;
  in n >> m;  // n candidates m total problems
  in x >> y;  // minimum of prblms solved compeltely or x-1 poblm && y partially
  

  while (n--) {
    string ms;
    in ms;
    int xcount=0, ycount=0;
    f(i, 0, ms.size()) {
      if (ms[i] == 'F')
        xcount++;

      else if (ms[i] == 'P')
        ycount++;
    }

    if(xcount>=x)
    out "1";
    else if(xcount==(x-1) && ycount>=y)
    out "1";

    else
    out "0";
  }
    out nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}