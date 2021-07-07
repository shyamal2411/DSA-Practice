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
  bool isUgly(int n) {
    if (n == 0)
      return false;

    while (n % 2 == 0)
      n /= 2;
    while (n % 3 == 0)
      n /= 3;
    while (n % 5 == 0)
      n /= 5;

    return n == 1;
  }
};

void solve() {
  int n, k;
  in n;
  Solution ss;
  if (ss.isUgly(n))
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