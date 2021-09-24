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
    cin >> n;
    if (n % 2 != 0)
      cout << "1 " << n << endl;

    else
      cout << "2 " << (n / 2) << endl;
  }

  return 0;
}