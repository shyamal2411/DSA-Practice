#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int mod = 1000000007;
typedef vector<int> vi;
#define pi pair<int, int>
#define f(i, arr, n) for (int i = arr; i < n; i++)
#define rf(i, arr, n) for (int i = n - 1; i >= arr; i--)
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
#define first first
#define second second

void solve() {
  int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
  in n;
  int arr[7];
  read(arr, 7);

  count = -1;
  while (n > 0) {
    count++;
    count %= 7;
    n -= arr[count];
  }
  out count + 1 << nl;
}

void solve3() {
  int n;
  cin >> n;
  int arr[1000]; //as max size is 1000
  read(arr, 7);

  while (n > 0) {
    f(i, 0, 7) {
      n -= arr[i];

      if (n <= 0) {
        cout << i + 1;
        return;
      }
    }
  }
}

void solve4() {
  int n;
  cin >> n;

  map<int, int> vec;
  int sum = 0;

  f(i, 1, 8) {
    int x;
    cin >> x;
    vec[i] = x;
    sum += x;
  }

  while (n > 0) {
    for (auto itr : vec) {
      n -= itr.second;

      if (n <= 0) {
        cout << itr.first << "\n";
        return;
      }
    }
  }
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve4();

  return 0;
}