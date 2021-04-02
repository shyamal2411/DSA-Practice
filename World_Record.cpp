#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<


float roundFunc(float var) {
  float value = (int)(var * 100 + .5);
  return (float)value / 100;
}

void solve() {
  int a, b, c, n, k, t, i, p, q, r, s, j, flag;
  float k1, k2, k3, v;
  cin >> k1 >> k2 >> k3 >> v;
  float count = (100.00) / (k1* k2 * k3 * v);
  float ans = roundFunc(count);

  if (ans < (float)9.58) {
    cout << "YES"<<endl;
  } else {
    cout << "NO"<<endl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);
  // cout<<fixed<<setprecision(5);
  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}