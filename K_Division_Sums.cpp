#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> t;
  while (t--) {
    cin >> n >> k;
    s = k;
    i = 2;
    while (s < n) {
      s = k * i;  // go on increasing p until smallest value gets divisible.
      i++;
    }
    cout << ceil(s * 1.0 / n) << endl;
  }
  return 0;
}
