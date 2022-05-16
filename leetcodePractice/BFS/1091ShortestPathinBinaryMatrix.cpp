#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/shortest-path-in-binary-matrix/
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int ans = 1;
        int row = grid.size(), col = grid[0].size();
        
        if(row == 0) return -1;
        if(col == 0) return -1;
        
        if(grid[0][0]!= 0 || grid[row - 1][col - 1]!= 0)
            return -1;
        
        queue<pair<int, int>> q;
        q.push(make_pair(0,0));
        vector<vector<int>> dir = {{1,1},{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,-1},{-1,1}};
        grid[0][0] = 1;
        
        while(!q.empty()){
            auto cur = q.front();
            int x= cur.first, y = cur.second;
            if(x == row - 1 && y == col -1) return grid[x][y];
            
            for(auto direct: dir){
                int nx = x + direct[0];
                int ny = y + direct[1];
                if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] == 0){
                    q.push(make_pair(nx, ny));
                    grid[nx][ny] = grid[x][y] + 1;
                }
            }
            q.pop();
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<vector<int>> grid = {{0,0,0},{1,1,0},{1,1,0}};
    cout<<s.shortestPathBinaryMatrix(grid);
    return 0;
}