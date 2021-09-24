#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<

void solve() {
  int k, t, p, q, r, s, count = 0, j, flag;

  string str;
  cin >> str;

  int i = 0;
  string ans = "";
  while (i < str.size()) {
    if (str.substr(i, 5) == "party") {
      ans += "pawri";
      i += 5;
    } else {
      ans += str[i];
      i++;
    }
  }

  cout << ans << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}