#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  ll int ans, a, b, c;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    ans = a + b + c;
    if (ans % 9 ==
        0)  // 7 for enhanced damage and 3 for that one damage all together
    {
      if (min(a, (min(b, c))) >= floor(ans * 1.0 / 9)) {
        cout << "YES"
             << endl;  // used ceiling function last time, refer that for reason
      } else {
        cout << "NO" << endl;
      }
    } else
      cout << "NO" << endl;
  }
  return 0;
}