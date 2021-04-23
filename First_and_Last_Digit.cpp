#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
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
  string str;
  cin >> str;

  vector<int> vec;
  f(i, 0, str.size()) { vec.push_back(str[i] - '0'); }

 out *vec.begin() + *vec.rbegin() << nl;
}

void solve2() {
  string str;
  cin >> str;

  out (*str.begin() - '0') + (*str.rbegin() - '0') <<nl;
}

void solve3() {
  int n, k, i, p, q, r, count = 0, j, flag, ans;
  string str;
  in str;

  out (str.front() - '0') + (str.back() - '0') <<nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}