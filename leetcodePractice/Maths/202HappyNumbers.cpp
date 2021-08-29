#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i, a, n) for (int i = a; i < n; i++)
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
    cout << arr[i] << " ";
#define in cin >>
#define out cout <<

class Solution {
 public:
  bool isHappy(int n) {
    while (true) {
      long sum = 0;
      while (n != 0) {
        int lastDigit = n % 10;
        n /= 10;
        sum += lastDigit * lastDigit;
      }
      if (1 <= sum && sum <= 9) {
        if (sum == 1 || sum == 7)
          return true;
        else
          return false;
      } else
        n = sum;
    }
  }
};
/* for different n, cases are
    true  (1) -> 1
        false (2) -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4
        false (3) -> 9 -> 81 -> 65 -> 61 -> 37 (look at 2)
        false (4) -> (look at 2)
        false (5) -> 25 -> 29 -> 85 -> 89 (look at 2)
        false (6) -> 36 -> 45 -> 41 -> 17 -> 50 -> 25  (look at 5)
        true  (7) -> 49 -> 97 -> 10
        false (8) -> 64 -> 52 -> 29 (look at 5)
        false (9) -> 9 -> 81 -> 65 (look at 3)

        All other n >= 10, while computing will become [1-9],
        So there are two cases 1 and 7 which are true.

        Notice, that all falses has the same path as 2 (loop).
        And 7 at the end becomes 1. */

void solve() {
  int n, k;
  in n;
  Solution ss;
  ss.isHappy(n);
  if (ss.isHappy(n))
    cout << "true\n";
  else
    cout << "false\n";
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}