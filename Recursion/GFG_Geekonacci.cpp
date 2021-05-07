#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int M = 1e9 + 7;
typedef vector<int> vi;
#define pi pair<int, int>
#define yes cout << 'YES' << endl;
#define no cout << 'NO' << endl;
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

int solve(int a, int b, int c, int n) {
  int k, i, p, q, r, count = 0, j, flag, ans = 0;

  for (int i = 4; i <= n; i++) {
    ans = a + b + c;

    a = b;
    b = c;
    c = ans;
  }

  return ans;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;

  while (t--) {
    int a, b, c, n;
    in a >> b >> c >> n;
    out solve(a, b, c, n) << nl;
  }
  return 0;
}