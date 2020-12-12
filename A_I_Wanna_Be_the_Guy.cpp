#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int a[p], b[q];

  cin >> p;
  fo(i, p) { cin >> a[i]; }
  cout << endl;
  cin >> q;
  fo(i, q) { cin >> b[i]; }
  cout << endl;

  fo(i, n) {
    if (a[i] || b[i] == n)
      cout << "I become the guy." << endl;
    else
      cout << "Oh, my keyboard!" << endl;
  }
  return 0;
}