#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/making-a-large-island/
class Solution {
 public:
  int i, j;
  // HELPER FUNCTIONS - DFSs
  int dfs(vector<vector<int>>& grid, int i, int j, int index) {
    int n = grid.size();
    if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1)
      return 0;

    grid[i][j] = index;
    int count = dfs(grid, i + 1, j, index) + dfs(grid, i - 1, j, index) +
                dfs(grid, i, j + 1, index) + dfs(grid, i, j - 1, index);

    return count + 1;
  }

  // to find adjacent island groups
  void findneighbours(vector<vector<int>>& grid, int i, int j, set<int>& s) {
    int n = grid.size();
    if (i > 0)
      s.insert(grid[i - 1][j]);
    if (j > 0)
      s.insert(grid[i][j - 1]);
    if (i < n - 1)
      s.insert(grid[i + 1][j]);
    if (j < n - 1)
      s.insert(grid[i][j + 1]);
  }

  // MAIN FUNCTION
  int largestIsland(vector<vector<int>>& grid) {
    int n = grid.size(), ans = 0, index = 2, count;
    map<int, int> area;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          area[index] = dfs(grid, i, j, index);
          ans = max(ans, area[index++]);
          // if grid is one large island, we find the max sized island
        }
      }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (grid[i][j] == 0) {
          set<int> s;
          findneighbours(grid, i, j, s);
          count = 1;
          for (int i : s) {
            count += area[i];
          }

          ans = max(ans, count);
        }
      }
    }
    return ans;
  }
};
//main function
int main() {
  vector<vector<int>> grid = {{1, 1, 0, 0, 0},
                              {1, 1, 0, 0, 0},
                              {0, 0, 1, 0, 0},
                              {0, 0, 0, 1, 1}};
  Solution s;
  cout << s.largestIsland(grid) << endl;
  return 0;
}