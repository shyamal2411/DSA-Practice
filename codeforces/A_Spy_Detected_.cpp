#include <bits/stdc++.h>
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
#define fr first
#define sc second
#define VC vector<int>
#define VP vector<pair<int, int>>
#define pb push_back

void solve() {
  int n;
  cin >> n;
  map<int, vector<int>> v;

  f(i, 0, n) {
    int x;
    cin >> x;
    v[x].pb(i + 1);
  }
  for (auto itr : v) {
    if (itr.sc.size() == 1) {
      cout << *itr.sc.begin() << endl;
    }
  }
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