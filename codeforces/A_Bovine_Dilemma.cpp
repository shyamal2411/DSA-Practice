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
    ll int arr[n];

    fo(i, n) { cin >> arr[i]; }
    set<ll int> s;
    // using set because no coordinate should be repeated.(set doesn't allow
    // repeating)
    fo(i, n) {
      for (j = i + 1; j < n; j++) {
        s.insert(abs(arr[i] - arr[j]));
        // just take the difference of these coordicates.
      }
      // because all are right angle triangles
    }

    cout << s.size() << endl;
  }
  return 0;
}