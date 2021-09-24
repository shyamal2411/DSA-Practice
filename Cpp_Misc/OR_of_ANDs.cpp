#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define nl endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
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
  int n, k, i, p, q, r, count = 0, j, flag, ans;
  cin >> n >> q;

  vector<int> vec(n);
  int xorval = 0;

  map<int, int> stb;

  f(i, 0, n) {
    cin >> vec[i];
    xorval |= vec[i];

    f(j, 0, 32) {
      if (vec[i] & (1 << j)) {
        stb[j]++;
      }
    }
  }
  cout << xorval << "\n";

  while (q--) {
    int x, y;
    cin >> x >> y;
    x--;

    f(j, 0, 32) {
      if (stb[j] == 1 && (vec[x] & (1 << j))) {
        xorval -= (1 << j);
        stb[j]--;
      }

      else if (vec[x] & (1 << j)) {
        stb[j]--;
      }
    }
    // vec[x] = y;

    f(j, 0, 32) {
      if (vec[x] & (1 << j)) {
        stb[j]++;
      }
    }
    xorval |= y;
    cout << xorval << endl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}