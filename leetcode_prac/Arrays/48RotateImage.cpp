class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    // as we can't use another 3D matrix for rotation,
    // we directly jump to optimal solution- in place

    int n = matrix.size();  // its m*m matrix.
    for (int i = 0; i < n; i++)
      for (int j = 0; j < i; j++)
        swap(matrix[i][j], matrix[j][i]);

    for (int i = 0; i < n; i++)
      reverse(matrix[i].begin(), matrix[i].end());
  }
};
// Matrix problem but didn't want to make another folder for it.