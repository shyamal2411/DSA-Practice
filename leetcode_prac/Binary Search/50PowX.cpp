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
};  // notes