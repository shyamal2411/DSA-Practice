class Solution {
 public:
  bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    // We need to check for the 0, 90, 180, 270 degree's only.
    int n = mat.size();

    // if it already matched the target, simply true.
    if (mat == target)
      return true;

    int deg = 3;
    // for checking rotations for 90,180,270 degrees

    while (deg--) {
      for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
          swap(mat[i][j], mat[j][i]);

      for (int i = 0; i < n; i++)
        reverse(mat[i].begin(), mat[i].end());

      // after rotating and reversing the matrix for 3 cases, check
      // if it meets the target matrix or not

      if (mat == target)
        return true;
    }
    return false;
  }
};