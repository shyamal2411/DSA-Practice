#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int mod = 1000000007;
typedef vector<int> vi;
#define pi pair<int, int>
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
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
  int n, k, l, i, p, q, r, count = 0, j, flag, ans = 0;
  in l;

  string s;
  cin >> s;

  f(i, 0, s.size()) {
    if (s[i] == '1') {
      count++;
    }

    ans++;
    if (2 * count >= ans) {
      out "YES" << nl;
      return;
    }
  }
  if (2 * count >= ans) {
    out "YES" << nl;
    return;
  }
  out "NO" << nl;
}

void solve2(){
  int year, good=0, bad=0;
  bool ans=false;
  string s;
  in year;
  in s;
  for( auto i: s)
  {
      if(i=='1')
      good++;
      else
      bad++;
      if(good>=bad)
      ans=true;
  }
  if(ans)
  out "yes"<<nl;
  else
  out "no"<<nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve2();

  return 0;
}