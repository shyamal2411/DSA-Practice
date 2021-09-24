#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
  cin >> n >> q;

  map<int, int> v;

  f(i, 0, n) {
    int s;
    cin >> s;

    if (v[s] == 0) {
      v[s] = i + 1;
    }
  }

  while (q--) {
    int z;
    cin >> z;

    cout << v[z] << " ";

    for (auto& itr : v) {
      if (itr.first == z) {
        continue;
      }
      if (itr.second < v[z]) {
        v[itr.first]++;
      }
    }

    v[z] = 1;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  // in t;
  while (t--) {
    solve();
  }
}