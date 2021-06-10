class Solution {
 public:
  int mySqrt(int x) {
    int mid, low=0, high = x;
    if (x < 2)
      return x;  // mid of 2 is 0, we don't want numbers smaller than 2.

    while (low < high) {
      mid = (low + high) / 2;
      if (x / mid >= mid)
        low = mid + 1;
      else
        high = mid;
    }
    return high - 1;
  }
};