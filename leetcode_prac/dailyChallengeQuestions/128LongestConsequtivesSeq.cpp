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
  // incorrect aproach, CORRECT ONE AT LAST
  int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i + 1] - nums[i] == 1)
        count++;
    }
    return count;
  }

  int longestConsecutive2(vector<int>& nums) {
    int ans = 0, count = 0, n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> v;
    v.push_back(nums[0]);

    for (int i = 1; i < n; i++) {
      if (nums[i] != nums[i - 1])
        v.push_back(nums[i]);
    }

    for (int i = 0; i < v.size(); i++) {
      if (i > 0 && v[i] == v[i - 1] + 1)
        count++;
      else
        count = 1;

      ans = max(ans, count);
    }
    return ans;
  }
  // CORRECT APPROACH
  int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0)
      return 0;
    int ans = 0, count = 0, n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> v;
    v.push_back(nums[0]);

    for (int i = 1; i < n; i++) {
      if (nums[i] != nums[i - 1])
        v.push_back(nums[i]);
    }

    for (int i = 0; i < v.size(); i++) {
      if (i > 0 && v[i] == v[i - 1] + 1)
        count++;
      else
        count = 1;

      ans = max(ans, count);
    }
    return ans;
  }
};

void solve() {
  int n, k;
  in n;
  vi nums(n);
  read(nums, n);
  Solution ss;
  cout << ss.longestConsecutive2(nums) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  //   in t;
  while (t--)
    solve();

  return 0;
}