#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// learnt from editorial
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int a, n, k, t, i, p, q, r, s, count, j;

  cin >> t;
  while (t--) {
    count = 0;  // everytime in the loop, count should be set to zero, so can't
                // be declared outside the loop.
    cin >> n >> k;
    while (n--) {
      cin >> a;
      count = count + a;
    }
    if (count % k == 0)
      cout << '0' << endl;
    else
      cout << '1' << endl;
  }
  return 0;
}