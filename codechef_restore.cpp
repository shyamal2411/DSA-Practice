#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> t;
  while (t--) {
    cin >> n;
    ll int first[n], second[n];
    fo(i, n) cin >> second[i];

    fo(i, n) first[i] = 1;

    ll adder = 1000000;
    fo(i, n) {
      if (first[i] == 1) {
        first[i] = adder;
      }
      if (second[i] - 1 != i) {
        first[second[i] - 1] = (adder) * (first[second[i] - 1]);
      }
      adder--;
    }
    fo(i, n) cout << first[i] << " ";
  }
  cout << endl;
}