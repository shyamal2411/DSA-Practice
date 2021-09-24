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
const char nl = '\n';

void solve() {
  int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
  in n;
  int arr[n];
  read(arr, n);
  sort(arr, arr + n);

  int temp1 = arr[n - 1] * arr[n - 2] * arr[n - 3];
  int temp2 = arr[0] * arr[1] * arr[n - 1];

  if (temp1 > temp2)
    cout << temp1 << "\n";

  else
    cout << temp2 << "\n";
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}