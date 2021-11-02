#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/unique-paths-iii/
// https://www.youtube.com/watch?v=XNKCkX_tHhM
class Solution
{
public:
    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int zero = 0, sx = 0, sy = 0;
        for (int r = 0; r < grid.size(); r++)
        {
            for (int c = 0; c < grid[0].size(); c++)
            {
                if (grid[r][c] == 0)
                    zero++;
                else if (grid[r][c] == 1)
                {
                    sx = r, sy = c;
                }
            }
        }
        return dfs(grid, sx, sy, zero);
    }

private:
    int dfs(vector<vector<int>> grid, int x, int y, int zero)
    {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == -1)
            return 0;
        if (grid[x][y] == 2)
            return zero == -1 ? 1 : 0;
        grid[x][y] = -1;
        zero--;
        int totalpaths = dfs(grid, x + 1, y, zero) + dfs(grid, x - 1, y, zero) +
                         dfs(grid, x, y + 1, zero) + dfs(grid, x, y - 1, zero);

        grid[x][y] = 0;
        zero++;
        return totalpaths;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid{{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 2, -1}};
    cout << s.uniquePathsIII(grid) << endl;
    return 0;
}