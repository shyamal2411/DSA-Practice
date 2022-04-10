#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-162/problems/number-of-closed-islands/
class Solution {
public:
      
    void dfs(int i, int j, vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        if(i < 0 || i > m - 1 || j < 0 || j > n-1 || grid[i][j] != 0)
            return;
        
        grid[i][j] = -1;
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((i == 0 || j == 0 || i == m-1 || j == n-1) && grid[i][j] == 0){
                    dfs(i,j,grid);
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){
                dfs(i,j,grid);
                ans++;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> grid = {{1,1,1,1,1,1,1,0},{1,0,0,0,0,1,1,0},{1,0,1,0,1,1,1,0},{1,0,0,0,0,1,0,1},{1,1,1,1,1,1,1,0}};
    cout<<s.closedIsland(grid)<<endl;
    return 0;
}