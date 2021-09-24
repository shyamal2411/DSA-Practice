#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int w, h, n, k, t, i, p, q, r, s, count = 1, j;

  cin >> t;
  while (t--) {
    cin >> w >> h >> n;
    ll int count = 1;

    while (w % 2 == 0) {
      count *= 2;
      w /= 2;
    }
    while (h % 2 == 0) {
      count *= 2;
      h /= 2;
    }

    if (count >= n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}