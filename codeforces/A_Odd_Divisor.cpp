#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int v, n, k, t, p, q, r, s, count = 0, j;
  cin >> t;
  while (t--) {
    cin >> v;

    while (v % 2 == 0) {
      v /= 2;
    }

    if (v == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}