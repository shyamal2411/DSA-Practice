class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> r(numRows);  // creating an empty vector for numRows.

    for (int i = 0; i < numRows; i++) {
      r[i].resize(i + 1);  // for number of numRows. the number of columns is
                           // equal.
      // so we resize an empty vector to size +1.
      r[i][0] = r[i][j] = 1;  // the first and last element will always be 1.

      for (j = 1; j < i;
           j++)  // linearly traverse from first column to second last column
        r[i][j] = r[i - 1][j - 1] + r[i - 1][j];  // from diagram.
    }
    return r;  // return 2D vector.
  }
};