// https://leetcode.com/problems/01-matrix/solution/
//Time complexity: O(r*c)
//Space complexity: O(r*c)

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
         int rows = mat.size();
        
        if (rows == 0)
            return mat;
        
        int cols = mat[0].size();
        vector<vector<int>> dist(rows, vector<int> (cols, INT_MAX));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
            
                if (mat[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({ i, j }); //Put all 0s in the queue.
                }
            }
        }

        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int newRow = curr.first + dir[i][0], newCol = curr.second + dir[i][1];
                if (newRow >= 0 && newCol >= 0 && newRow < rows && newCol < cols) {
                   
                    if (dist[newRow][newCol] > dist[curr.first][curr.second] + 1) {
                        dist[newRow][newCol] = dist[curr.first][curr.second] + 1;
                        q.push({ newRow, newCol });
                    }
                }
            }
        }
        return dist;
    }
};
