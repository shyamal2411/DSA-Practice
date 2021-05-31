class Solution {
 public:
  void dfs(int i, int j, vector<vector<int>>& visited, vector<vector<int>>& image, int newColor, int n, int m, int oldColor) {
   
    if (i < 0 or j < 0 or i >= n or j >= m)
      return;
    if (visited[i][j] or image[i][j] != oldColor)
      return;
    visited[i][j] = 1;
    image[i][j] = newColor;
    dfs(i + 1, j, visited, image, newColor, n, m, oldColor);
    dfs(i - 1, j, visited, image, newColor, n, m, oldColor);
    dfs(i, j + 1, visited, image, newColor, n, m, oldColor);
    dfs(i, j - 1, visited, image, newColor, n, m, oldColor);
  }

  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int n = image.size();
    int m = image[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int oldColor = image[sr][sc];

    dfs(sr, sc, visited, image, newColor, n, m, oldColor);
    return image;
  }
};