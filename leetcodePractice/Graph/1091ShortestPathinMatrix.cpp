#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/shortest-path-in-binary-matrix/
// https://leetcode.com/problems/shortest-path-in-binary-matrix/discuss/1065225/C%2B%2B-BFS-Simple-and-Clear-Solution
// https://leetcode.com/problems/shortest-path-in-binary-matrix/discuss/1063734/C%2B%2B-Optimised-BFS-vs.-DFS-Fastest-Solution-to-Date-Explained-100-Time-~99-Space
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        // edge case: start or end not accessible
        if (grid[0][0] || grid.back().back()) return -1;
        // support variables
        int res = 2, len = 1, maxX = grid[0].size() - 1, maxY = grid.size() - 1;
        queue<pair<int, int>> q;
        // edge case: single cell matrix
        if (!maxX && !maxY) return 1 - (grid[0][0] << 1);
        // adding the starting point
        q.push({0, 0});
        // marking start as visited
        grid[0][0] = -1;
        while (len) {
            while (len--) {
                // reading and popping the coordinates on the front of the queue
                auto [cx, cy] = q.front();
                q.pop();
                for (int x = max(0, cx - 1), lmtX = min(cx + 1, maxX); x <= lmtX; x++) {
                    for (int y = max(0, cy - 1), lmtY = min(cy + 1, maxY); y <= lmtY; y++) {
                        // check if we reached the target
                        if (x == maxX && y == maxY) return res;
                        // marking it as visited and adding it to the q if it was still a valid cell
                        if (!grid[y][x]) {
                            grid[y][x] = -1;
                            q.push({x, y});
                        }
                    }
                }
            }
            // preparing for the next loop
            res++;
            len = q.size();
        }
        return -1;
    }
};

class Solution {
public:
    // Helper function to check if point is in grid
    bool isValidPoint(int x, int y, int n, int m) {
        return x >= 0 && x <= n && y >= 0 && y <= m;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size()-1, m = grid[0].size()-1;
        if (grid[0][0] || grid[n][m]) 
            return -1;
        
        queue<vector<int> > q;
        vector<int> curr;
        
        q.push({0, 0});
        grid[0][0] = 1;
        
        while (!q.empty() && !grid[n][m]) {
            curr = q.front();
            q.pop();
            
            for (int i = 0; i < 8; i++) {
                int x = curr[0] + x_points[i];
                int y = curr[1] + y_points[i];
                
                if (isValidPoint(x, y, n, m) && grid[x][y] == 0) {
                    grid[x][y] = grid[curr[0]][curr[1]] + 1;
                    q.push({x, y});
                }
            }
        }
        return grid[n][m] ? grid[n][m] : -1;
    }
    
private:
    vector<int> x_points = {-1,-1,-1,0,0,1,1,1};
    vector<int> y_points = {-1,0,1,-1,1,-1,0,1};
};

int main(){
    Solution ss;
    vector<vector<int>> grid = {{0,1,1,0},{0,1,1,0},{0,0,0,0}};
    int ans = ss.shortestPathBinaryMatrix(grid);
    cout << ans << endl;
    return 0;
}