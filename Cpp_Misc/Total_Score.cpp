#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  t = 1;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int a[k];
    for (int i = 0; i < k; i++)
      cin >> a[i];

    while (n--) {
      string str;
      cin >> str;

      int ans = 0;

      for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
          ans += a[i];
        }
      }
      cout << ans << "\n";
    }
  }
  return 0;
}
