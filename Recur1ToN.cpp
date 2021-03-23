//! Problem link
/* https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/?track=DSA-Foundation-Recursion&amp;batchId=197#
 */

class Solution {
 public:
  void printNos(int N) {
    if (N <= 0)
      return;
    printNos(N - 1);
    cout << N << " ";
  }
}