#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> t;
  while (t--) {
    cin >> n;
    string str;
    cin >> str;

    for (i = 0; i < n; i += 4) {
      ll int ans = 0;
      for (j = 0; j < 4; j++) {
        ans += int(str[i + j] - '0') * pow(2, j);
      }
      cout << char(ans + 'a');
    }
    cout << endl;
  }
}