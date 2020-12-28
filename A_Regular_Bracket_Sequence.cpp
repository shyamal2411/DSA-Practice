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
    string str;
    cin >> str;

    if (str.size() % 2) {
      cout << "NO" << endl;
    } else {
      if (str[0] == ')') {
        cout << "NO" << endl;
        break;
      } else if (str[str.size() - 1] == '(') {
        cout << "NO" << endl;
        break;
      } else {
        fo(i, str.size()) {
          if (i % 2 == 0 && str[i] == ')') {
            cout << "NO" << endl;
            break;
          } else if (i % 2 != 0 && str[i] == '(') {
            cout << "NO" << endl;
            break;
          }
        }
      }
      cout << "YES" << endl;
    }
  }
  return 0;
}