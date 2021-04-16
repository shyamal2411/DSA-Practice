#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define nl endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

void solve() {
  string s;
  cin >> s;

  f(i, 0, s.size()) {
    if (s[i] == '.') {
      cout << "0";
    } else if (s[i] == '-') {
      if (s[i + 1] == '-') {
        cout << "2";
        i++;
      } else if (s[i + 1] == '.') {
        cout << "1";
        i++;
      }
    }
  }

  cout << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  // in t;
  while (t--) {
    solve();
  }
}