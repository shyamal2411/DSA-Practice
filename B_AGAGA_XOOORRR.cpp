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
  int n, k, i, p, q, r, count = 0, j, ans;
  in n;
  int arr[n];
  read(arr, n);
  int pre[n];
  pre[0] = arr[0];
  f(i, 1, n) { pre[i] = (pre[i - 1] ^ arr[i]); }
  bool flag = 0;
  // for 2
  {f(i, 0, n - 1){if (pre[i] == (pre[n - 1] ^ pre[i])){flag = 1;
  break;
}
}
}

// for 3
{
  f(i, 0, n - 2) {
    int st = pre[i];
    f(j, i + 1, n - 1) {
      int mid = pre[j] ^ pre[i];
      int en = pre[n - 1] ^ pre[j];
      if (st == mid and mid == en) {
        flag = 1;
        break;
      }
    }
    if (flag)
      break;
  }
}

if (flag) {
  cout << "YES";
} else {
  cout << "NO";
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