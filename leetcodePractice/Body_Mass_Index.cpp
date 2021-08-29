#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int m, h, n, k, t, i, p, q, r, s, count = 0, j;
  cin >> t;
  float ans = 0;

  while (t--) {
    cin >> m >> h;
    ans = m / (h * h);
    if (ans <= 18)
      cout << '1' << endl;

    if (ans >= 19 && ans <= 24)
      cout << '2' << endl;

    if (ans >= 25 && ans <= 29)
      cout << '3' << endl;

    if (ans >= 30)
      cout << '4' << endl;
  }
  return 0;
}