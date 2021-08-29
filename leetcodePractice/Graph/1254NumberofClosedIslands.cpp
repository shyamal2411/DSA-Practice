class Solution {
 public:
  void dfs(vector<vector<int>>& grid, int i, int j) {
    if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() &&
        grid[i][j] == 0) {
      grid[i][j] = 1;

      // checking dfs on all the four sides
      dfs(grid, i + 1, j);
      dfs(grid, i - 1, j);
      dfs(grid, i, j + 1);
      dfs(grid, i, j - 1);
    }
    return;
  }

  int closedIsland(vector<vector<int>>& grid) {
    int n = grid.size(), i, j;
    if (n == 0)
      return 0;
    int m = grid[0].size();
    if (m == 0)
      return 0;

    // for column
    for (i = 0; i < n; i++) {
      if (grid[i][0] == 0)
        dfs(grid, i, 0);

      if (grid[i][m - 1] == 0)
        dfs(grid, i, m - 1);
    }
    // for row
    for (j = 0; j < m; j++) {
      if (grid[0][j] == 0)
        dfs(grid, 0, j);

      if (grid[n - 1][j] == 0)
        dfs(grid, n - 1, j);
    }

    int count = 0;  // number of islands
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if (grid[i][j] == 0) {
          count++;
          dfs(grid, i, j);
        }
      }
    }
    return count;
  }
};