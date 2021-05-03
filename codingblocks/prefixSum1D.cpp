#include <bits/stdc++.h>
using namespace std;
#define int long long
const int n = 1e5 + 10;
int a[n], pf[n];

//! WITHOUT PREFIX SUM
void regularManner() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++) {
      sum += a[i];
    }
    cout << sum << endl;
  }
}
//! WITH PREFIX SUM
void prefixSum() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pf[i] = pf[i - 1] + a[i];
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << pf[r] - pf[l - 1] << endl;
  }
}

int32_t main() {
  int t;
  t = 1;
  // in t;
  while (t--) {
    regularManner();
    // prefixSum();
  }

  return 0;
}