#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
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

class Solution {
 public:
  // SLIDING WINDOW
  double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;

    for (int i = 0; i < k; i++)
      sum += nums[i];

    double ans = sum;
    for (int i = k; i < nums.size(); i++) {
      sum += nums[i] - nums[i - k];
      ans = max(ans, sum);
    }
    return ans / k;
  }
};
/*TIME:  O(n)
  SPACE: O(1) */

void solve() {
  int i, p, q, r, count = 0, j, flag, ans = 0;
  float n, k;
  cin >> n >> k;
  vi nums(n);
  read(nums, n);
  Solution ob;
  cout << ob.findMaxAverage(nums, k) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}