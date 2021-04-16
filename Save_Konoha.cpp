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
  int z, n, k, t, i, p, r, count = 0, j, flag;
  cin >> n >> z;
  priority_queue<int> q;
  f(i, 0, n) {
    int a;
    in a;
    q.push(a);
  }
  while (!q.empty()) {
    int a = q.top();
    q.pop();
    z = z - a;
    count++;
    a /= 2;
    if (a > 0)
      q.push(a);
    if (z <= 0)
      break;
  }
  if (z > 0)
    cout << "Evacuate" << endl;

  else
    cout << count << endl;
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