
class Solution {
 public:
  int firstBadVersion(int n) {
    int low = 1, high = n;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (isBadVersion(mid))
        high = mid - 1;
      else
        low = mid + 1;
    }
    return low;
  }
};  // same question as 374. guess the number