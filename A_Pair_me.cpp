#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int x, y, z, n, k, t, i, p, q, r, s, count = 0, j;

  cin >> t;
  fo(i, 5) {
    cin >> x >> y >> z;

    if (x == y + z || y == z + x || z == x + y)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}