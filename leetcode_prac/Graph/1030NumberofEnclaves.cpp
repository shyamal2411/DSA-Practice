class Solution {
 public:
  vector<vector<int>> visited;

  void dfs(vector<vector<int>>& grid, int i, int j) {
    if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() &&
        grid[i][j] == 1 && visited[i][j] == 0) {
      visited[i][j] = 1;
      dfs(grid, i + 1, j);
      dfs(grid, i - 1, j);
      dfs(grid, i, j + 1);
      dfs(grid, i, j - 1);
    }

    return;
  }

  int numEnclaves(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int i, j, count = 0;
    visited.resize(n, vector<int>(m, 0));

    // for column
    for (i = 0; i < n; i++) {
      if (grid[i][0] == 1)
        dfs(grid, i, 0);

      if (grid[i][m - 1] == 1)
        dfs(grid, i, m - 1);
    }
    for (j = 0; j < m; j++) {
      if (grid[0][j] == 1)
        dfs(grid, 0, j);

      if (grid[n - 1][j] == 1)
        dfs(grid, n - 1, j);
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        //  cout<<visited[i][j]<<" ";
        if (grid[i][j] == 1 && visited[i][j] == false)
          count++;
      }
    }
    return count;
  }
};