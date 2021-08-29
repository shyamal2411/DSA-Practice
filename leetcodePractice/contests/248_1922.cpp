/*A digit string is good if the digits (0-indexed) at even indices are even and
the digits at odd indices are prime (2, 3, 5, or 7).

For example, "2582" is good because the digits (2 and 8) at even positions are
even and the digits (5 and 2) at odd positions are prime. However, "3245" is not
good because 3 is at an even index but is not even. Given an integer n, return
the total number of good digit strings of length n. Since the answer may be
large, return it modulo 109 + 7.

A digit string is a string consisting of digits 0 through 9 that may contain
leading zeros.



Example 1:

Input: n = 1
Output: 5
Explanation: The good numbers of length 1 are "0", "2", "4", "6", "8".
Example 2:

Input: n = 4
Output: 400
Example 3:

Input: n = 50
Output: 56490830*/
#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
  long long helper(int a, long long b, int mod) {
    if (b == 0)
      return 1;

    long long x = helper(a, b / 2, mod);

    if (b % 2 == 0)
      return (x * x) % mod;
    else
      return (((a * x) % mod) * x) % mod;
  }

  int countGoodNumbers(long long n) {
    int mod = 1e9 + 7;
    return (helper(5, (n + 1) / 2, mod) * helper(4, n / 2, mod)) % mod;
  }
};

void solve() {
  long long n;
  in n;
  Solution ss;
  cout << ss.countGoodNumbers(n) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}

/*
At even indices there can be 5 values(0,2,4,6,8) i.e. all even numbers 0 to 9
And At odd indices there can 4 values(2,3,5,7) i.e. all prime numbers 0 to 9
So we notice that there are 5 values which can be in even indices and 4 in odd
indices. So now Logic is simple :- Total number of good digit strings would be
(5 ^ even indices) * (4 ^ odd indices)....We also need to return  % 10^9 + 7.
But the other problem is the constraints which is way too big. So we need to
calculate (5 ^ even indices) and  (4 ^ odd indices) in log(n) time, which is
done by help function. The help function is self explanatory but if any
doubts do let me know.
*/