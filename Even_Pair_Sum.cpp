#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> n;

  while (n--) {
    cin >> p >> q;
    ll int ans, p1, q1, p2, q2;
    p1 = p / 2;   // getting even numbers out of p
    q1 = p - p1;  // odd numbers out of p
    p2 = q / 2;   // getting even numbers out of q
    q2 = q - p2;  // odd numbers out of q
    ans = p1 * p2 + q1 * q2;  // sum of even numbers can be sum of odd+odd and
                              // even+even but can never be odd+even
    cout << ans << "\n";
  }  // end of while
  return 0;
}