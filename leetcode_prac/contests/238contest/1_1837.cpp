class Solution {
 public:
  int sumBase(int n, int k) {
    int ans = 0;
    while (n) {
      ans = ans + n % k;
      n = n / k;
    }
    return ans;
  }
};