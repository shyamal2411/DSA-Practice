// MY SOLUTION:
/*
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
    int arr[n];

    fo(i, n) { cin >> arr[i]; }
    fo(i, n) {
      if (i % 2 == 0)
        cout << arr[i] << " ";
      else
        cout << arr[n - i - 1] << " ";
    }
    cout << endl;
  }
  return 0;
}*/

// EDITORIAL SOLUTION:
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int& e : v) {
    cin >> e;
  }
  int left = 0, right = n - 1;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans[i] = v[left++];
    } else {
      ans[i] = v[right--];
    }
  }
  for (int i : ans) {
    cout << i << " ";
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}