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

int solve() {}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);
  int n, k, t, i, p, q, r, count = 0, j, flag;
  in n;
  if (n == 1) {
    cout << 1;
    return 0;
  }

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return 0;
  }

  if (n % 2 == 0) {
    for (int i = 2; i <= n; i += 2)
      cout << i << " ";
    for (int i = 1; i < n; i += 2)
      cout << i << " ";
  } else {
    for (int i = n - 1; i > 0; i -= 2)
      cout << i << " ";
    for (int i = n; i > 0; i -= 2)
      cout << i << " ";
  }
}