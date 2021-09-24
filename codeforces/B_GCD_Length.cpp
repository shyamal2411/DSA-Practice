#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long

int vec[] = {2, 11, 101, 1087, 10007, 100003, 1000003, 10000019, 100000007};

void solve() {
  int p, q, r;
  cin >> p >> q >> r;

  int dummy = pow(10, r - 1);

  if (p == q) {
    cout << vec[p - r] * dummy << " " << (vec[q - r] + 1) * dummy << "\n";
  }

  else {
    cout << vec[p - r] * dummy << " " << vec[q - r] * dummy << "\n";
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}