#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// LEARNT FROM:https://youtu.be/kV37sZV9pgk
void solve() {
  int n;
  cin >> n;
  int arr[n];
  fo(i, n) cin >> arr[i];

  fo(i, n) 
  arr[arr[i] % n] = arr[arr[i] % n] + n;

  fo(i, n) {
    if (arr[i] / n > 1)
      cout << i << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  solve();
  return 0;
}