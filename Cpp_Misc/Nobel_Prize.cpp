#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
// Self explanation at the end of the code
#define int long long
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

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
  cin >> n >> k;
  set<int> s;

  f(i, 0, n) {
    int x;
    cin >> x;
    s.insert(x);
  }

  if (s.size() < k) {
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
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

/*
As in the problem, there is n & k, k refers 4 2 1 1 for example, so there is
field with 2,3 which chef can work on now in problem, we take n, k store the
elements in set, why? because set stores only unique elements in it, repetition
is not allowed, so numbers will be unique Then we compare the size of that set
with given K, in example 4 2 1 1, set will only cotain- 1 2 4, there's room for
3, hence we print Yes
*/