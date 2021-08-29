#include <bits/stdc++.h>
using namespace std;

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
/*
group the islands by changing the 1s to their index and increment the index.
All islands in a particular group have the same index. We store the index and the corresponding area in a map and keep track of the maximum area until now.
Examples:
1 0 1 -> 2 0 3
0 1 1 -> 0 3 3
1 0 1 -> 4 0 3

Now, we traverse each 0 in the grid and find its adjacent group and add up their areas.
For the 0 at (0,1), we get area=m[2]+m[3]+1=1+4+1=6
For the 0 at (1,0), we get area=m[2]+m[3]+m[4]+1=1+4+1+1=7
We add 1 to account for the converted island.

At the end, we are left with the required answer.

*/

int main() {
  vector<vector<int>> grid;
  grid.push_back({1, 1, 0, 0, 0});
  grid.push_back({1, 1, 0, 0, 0});
  grid.push_back({0, 0, 1, 0, 0});
  grid.push_back({0, 0, 0, 1, 1});
  grid.push_back({0, 0, 0, 0, 0});
  Solution s;
  cout << s.largestIsland(grid) << endl;
  return 0;
}