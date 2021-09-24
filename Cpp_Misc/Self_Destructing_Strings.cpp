#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// learnt from Mann's code next day after the contest
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j, diff = 0, count1 = 0;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s.resize(s.length());
    if (s.length() % 2)
      cout << -1 << "\n";
    else {
      for (i = 0; i < s.length(); i++) {
        if (s[i] == '0')
          count++;
        else
          count1++;
      }
      if (count == 0 || count1 == 0)
        cout << -1 << endl;
      else {
        diff = abs(count - count1);
        cout << diff / 2 << endl;
      }
    }
  }

  return 0;
}