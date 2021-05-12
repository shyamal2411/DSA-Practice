#include <bits/stdc++.h>
using namespace std;

// #define int long long
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

int solve1(int n, int m) {
  int k, i, p, q, r, count = 0, j, flag, ans = 0;

  if (n > m)
    return 0;
}

void solve() {
  int n, m, count = 0, flag;
  in n >> m;

  //   do {
  //     if (n == m)
  //       return 0;
  //     if (m < n)
  //       return -1;
  //     n *= 2;
  //     count++;
  //   } while (n > m);

  double temp = m * 1.0 / n;

  if (temp != int(temp)) {
    cout << -1 << endl;
    return;
  }

  flag = m / n;

  if (flag == 1) {
    cout << 0 << endl;
    return;
  }

  int num2 = 0;
  while (flag % 2 == 0) {
    num2++;
    flag /= 2;
  }

  int num3 = 0;
  while (flag % 3 == 0) {
    num3++;
    flag /= 3;
  }

  if (flag != 1) {
    cout << -1 << endl;
    return;
  }

  cout << num2 + num3 << endl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // int n,m;
  // cin>>n>>m;
  // solve(n,m);

  while (t--)
    solve();

  return 0;
}