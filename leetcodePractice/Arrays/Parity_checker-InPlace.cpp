class Solution {
 public:
  vector<int> sortArrayByParity(vector<int>& A) {
    int last = 0, current = 0;
    while (current < A.size()) {
      if (A[current] % 2 == 0) {
        swap(A[last], A[current]);
        last++;
      }
      current++;
    }
    return A;
  }
};
