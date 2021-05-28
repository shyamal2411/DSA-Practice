class Solution {
 public:
  void dfs(int i, vector<vector<int>>& isConnected, vector<bool>& visited) {
    visited[i] = true;
    for (int j = 0; j < visited.size(); j++) {
      if (i != j && isConnected[i][j] && !visited[j])
        dfs(j, isConnected, visited);
    }
  }

  int findCircleNum(vector<vector<int>>& isConnected) {
    if (isConnected.empty())
      return 0;
    int n = isConnected.size(), i, j;

    vector<bool> visited(n, false);
    int city = 0;
    for (i = 0; i < visited.size(); i++) {
      city += !visited[i] ? dfs(i, isConnected, visited), 1 : 0;

      //             if(!visited[i])
      //                 city += dfs(i, isConnected, visited), 1;

      //             else
      //                 city += dfs(i, isConnected, visited), 0;
    }
    return city;
  }
};