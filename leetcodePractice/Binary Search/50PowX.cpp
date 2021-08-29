
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
  double myPow(double x, int n) {
    // return pow(x,n);

    double ans = 1;
    while (n) {
      if (n % 2) {
        if (n > 0)
          ans *= x;
        else
          ans /= x;
      }
      x *= x;
      n /= 2;
    }
    return ans;
  }
  double myPow2(double x, int n) {
    double ans = 1.0;
    long long nn = n;
    // corner case
    if (nn < 0)
      nn *= -1;

    while (nn) {
      if (nn % 2) {
        ans *= x;
        nn -= 1;
      } else {
        x *= x;
        nn /= 2;
      }
    }
    if (n < 0)
      ans = (double)(1.0) / (double)(ans);
    return ans;
  }

};  // notes

void solve() {
  int n;
  double k;
  in k >> n;
  Solution ss;
  cout << ss.myPow2(k, n) << nl;
}

int32_t main() {
  cout << fixed << setprecision(5) << endl;
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}