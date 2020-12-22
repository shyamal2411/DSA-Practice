#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// Learnt from Editorial video.
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> t;
  while (t--) {
    ll int x, y, k, n;
    cin >> x >> y >> k >> n;
    if (abs(x - y) % (2 * k) == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}