#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
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

int solve() {
  int n;
  cin >> n;
  map<int, vector<int, int>> v;

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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, countchar = 0, count = 0, j;
  cin >> t;
  while (t--) {
    cin >> n;
    solve(n);
    // while (n--) {
    //   cin >> str;
    //   for (i = str.length(); i > 0; i--) {
    //     if (str[i] == ')')
    //       count++;

    //     if (str[i] == 'a' || str[i] == 'z' || str[i] == 48 || str[i] == 57)
    //       countchar++;
    //   }
    //   if (count > countchar)
    //     cout << "Yes" << endl;
    //   else
    //     cout << "No" << endl;
    // }
  }
  return 0;
}