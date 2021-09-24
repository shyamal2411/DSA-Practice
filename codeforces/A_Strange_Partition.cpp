#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count=0, flag, j, x;

  cin >> t;
  while (t--) {
    cin >> n >> x;
    ll int max = 0;
    count = 0;

    fo(i, n) {
      cin >> p;
      count += p;
      max += (ll int)ceil(p * 1.0 / x);
    }

    cout << (ll int)ceil(count * 1.0 / x) << ' ' << max << endl;
  }
}