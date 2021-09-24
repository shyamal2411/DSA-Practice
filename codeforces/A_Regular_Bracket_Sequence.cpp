#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// ACCEPTED SOLUTION

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s.resize(s.length());
    ll i, count = 0, flag = 0;

    if (s.length() % 2)
      cout << "NO"
           << "\n";
    else if (s[0] == ')' || s[s.length() - 1] == '(')
      cout << "NO"
           << "\n";
    else
      cout << "YES"
           << "\n";
  }
  return 0;
}