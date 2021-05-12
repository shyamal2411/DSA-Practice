#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define nl endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
#define in cin >>
#define out cout <<

int divisible9(int n) {
  int k, i, p, q, r, count = 0, j, flag, ans = 0;
  int sum;
  if (n == 9)
    return 1;
  if (n < 9)
    return 0;
  sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  divisible9(sum);
}

int divisible11(int n) {
  int k, i, p, q, r, count = 0, j, flag, ans = 0;
  int s1 = 0, s2 = 0, diff;
  if (n == 0)
    return 1;
  if (n < 10)
    return 0;
  while (n > 0) {
    s1 += n % 10;
    n /= 10;
    s2 += n % 10;
    n /= 10;
  }
  diff = s1 > s2 ? (s1 - s2) : (s2 - s1);
  divisible11(diff);
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--) {
    int n;
    in n;
    out divisible11(n);
  }
  return 0;
}