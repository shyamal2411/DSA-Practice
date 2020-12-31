#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

void solve() {
  ll n;
  cin >> n;
  ll a[n + 1], b[2 * n + 2] = {0};
  ll i, count = 0;
  for (i = 0; i < n; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  for (i = n - 1; i >= 0; i--) {
    if (b[a[i] + 1] == 0 && b[a[i]]) {
      b[a[i] + 1] = 1;
      b[a[i]]--;
    }
  }
  for (i = 1; i < 2 * n + 2; i++) {
    if (b[i])
      count++;
  }
  cout << count << "\n";
}

void test_case() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  test_case();
  // solve();
  return 0;
}