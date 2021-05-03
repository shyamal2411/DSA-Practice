#include <bits/stdc++.h>
using namespace std;
#define int long long
const int n = 1e3 + 10;
int arr[n][n];
long long pf[n][n];

void prefixSum() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
      pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
    }
  }

  int q;
  cin >> q;
  while (q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1];
    cout << endl;
  }
}

void regular() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
    }
  }

  int q;
  cin >> q;
  while (q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = 0;
    for (int i = a; i <= c; i++) {
      for (int j = b; j <= d; j++) {
        sum += arr[i][j];
      }
    }
    cout << sum << endl;
  }
}

int32_t main() {
  int t;
  t = 1;
  // in t;
  while (t--) {
    // regular();
    prefixSum();
  }

  return 0;
}