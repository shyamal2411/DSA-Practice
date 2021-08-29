class Solution {
 public:
  int xorOperation(int n, int start) {
    int count = 0;
    for (int i = 0; i < n; i++) {
      count ^= start + 2 * i;
    }
    return count;
  }
};