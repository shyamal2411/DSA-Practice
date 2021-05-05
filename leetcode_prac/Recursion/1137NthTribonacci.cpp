class Solution {
 public:
  int tribonacci(int n) {
    // handling the corner cases
    if (n == 0) {
      return 0;
    } else if (n == 1 || n == 2)
      return 1;
    else {
      int arr[n + 1];
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 1;  // assigning values as we do in fibonacci (iterative)
      for (int i = 3; i < n + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
      }

      return arr[n];
    }
  }
};