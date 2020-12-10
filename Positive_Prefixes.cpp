#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> t;
  while (t--) {
    cin >> n >> k;

    ll int positive = k;
    ll int negative = n - k;
    // given in first line, two positive integers N and K, where K≤N

    fo(i, n) {
      if (i % 2 == 0) {  // for even numbers
        if (negative > 0) {
          // for each valid i, Ai is either i or −i, writing for -ve i
          cout << -(i + 1) << " ";
          negative--;
        } else {
          cout << i + 1 << " ";
        }
      }

      if (i % 2 != 0) {      // same for odd numbers
        if (positive > 0) {  // for each valid i, Ai is either i or −i, so
                             // writing for +ve i
          cout << i + 1 << " ";
          positive--;
        } else {
          cout << -(i + 1) << " ";
        }
      }
    }

    cout << endl;
  }
}
