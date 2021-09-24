#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int flag1, flag2, x, y, n, k, t, i, p, q, r, s, count = 0, j;
  ll int U = 0, D = 0, R = 0, L = 0;
  string str;

  cin >> t;
  while (t--) {
    cin >> p >> q;

    ll int U = 0, D = 0, R = 0, L = 0;

    string str;
    cin >> str;

    fo(i, str.size()) {
      if (str[i] == 'U') {
        U++;
      }
      if (str[i] == 'R') {
        R++;
      }
      if (str[i] == 'L') {
        L++;
      }
      if (str[i] == 'D') {
        D++;
      }
    }

    ll int flag1 = 0, flag2 = 0;

    if (q <= 0) {
      if (abs(q) <= D) {
        flag1 = 1;
      }
    }

    else if (q > 0) {
      if (abs(q) <= U) {
        flag1 = 1;
      }
    }

    if (p <= 0) {
      if (abs(p) <= L) {
        flag2 = 1;
      }
    } else if (p > 0) {
      if (abs(p) <= R) {
        flag2 = 1;
      }
    }

    if (flag1 && flag2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
