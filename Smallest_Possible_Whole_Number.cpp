#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int ans,n, k, t, i, p, q, r, s, count = 0, j;

  cin >> t;
  while (t--) {
    cin >> n >> k;
    cout << n-(n/k)*k<< endl;
  }

  return 0;
}