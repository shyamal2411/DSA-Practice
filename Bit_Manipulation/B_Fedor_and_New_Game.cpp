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

void solve() {
  int n, m, k, i, p, q, r, count = 0, j, flag, ans = 0;
  cin >> n >> m >> k;
  bitset<32> arr[m + 10];

  f(i, 0, m + 1) {
    int x;
    cin >> x;
    arr[i] = x;
  }
  ans = 0;

  f(i, 0, m) {
    int diff = 0;

    f(j, 0, 32) {
      if (arr[m][j] != arr[i][j]) {
        diff++;
      }
    }

    if (diff <= k) {
      ans++;
    }
  }
  out ans << nl;
}

void solve1() {
  int n, m, k, ans = 0;
  
  cin >> n >> m >> k;

  vector<int> arr(m + 1);
  read(arr, m + 1);

  f(i, 0, m) {
    int count = 0;

    f(j, 0, n) {
      if ((arr[i] & (1 << j)) != (arr[m] & (1 << j))) 
        count++;
    }

    if (count <= k) 
      ans++;
  }
  cout << ans << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve1();

  return 0;
}