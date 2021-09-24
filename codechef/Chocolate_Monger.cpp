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

void solve1() {
  int n, x;
  in n >> x;
  set<int> st;
  f(i, 0, n) {
    int type;
    in type;
    st.insert(type);
  }
  int count = st.size();
  out min(n - x, count) << nl;
}

void solve() {
  int n, x, k, i, p, q, r, count = 0, j, flag, ans;
  cin >> n >> x;

  map<int, int> mm;
  f(i, 0, n) {
    int x;
    cin >> x;
    mm[x]++;
  }
  int te = n - x;
  int te1 = mm.size();

  cout << min(te1, te) << "\n";
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
    solve1();
  }
}