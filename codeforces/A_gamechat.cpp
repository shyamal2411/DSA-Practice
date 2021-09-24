#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  string str;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> str;
    count = 0;
    for (i = str.size() - 1; i >= 0; i--) {
      if (str[i] != ')') {
        break;
      } else {
        count++;
      }
    }
    if (count > n - count) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}