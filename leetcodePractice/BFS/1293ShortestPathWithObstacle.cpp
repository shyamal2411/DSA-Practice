#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    
    int shortestPath(vector<vector<int>>& grid, int k) {
        return solve(grid, k);
    }
    
    int solve(vector<vector<int>> &grid, int k){
        
        vector<vector<int>> vis(grid.size(), vector<int> (grid[0].size(), -1));
        queue<vector<int>> q;
        
        //queue is storing (x,y, current path length, number of obstacles we can still remove)
        q.push({0,0,0,k});
        while(!q.empty()){
            auto t = q.front();
            int x = t[0], y = t[1];
            q.pop();
            
            //edge cases, current position is outside the grid.
            if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
                continue;
            
            //Destination found
            if(x == grid.size() - 1 && y == grid[0].size() - 1)
                return t[2];
            
            if(grid[x][y] == 1){
                if(t[3] > 0) // encountered obstacle, we can remove it
                    t[3]--;
                else
                    continue;
            }
            
            if(vis[x][y] != -1 && vis[x][y] >= t[3])
                continue;
            vis[x][y] = t[3];
            // The cell was previously visited by some path and we were able to remove more obstacles from the previous path.
			// Then we don't need to continue on our current path
            q.push({x+1, y, t[2]+1, t[3]});
            q.push({x, y+1, t[2]+1, t[3]});
            q.push({x-1, y, t[2]+1, t[3]});
            q.push({x, y-1, t[2]+1, t[3]});
        }
        return -1;
    }
};

int main(){
Solution ss;
    vector<vi> grid = {{0,0,0}, {1,1,0}, {0,0,0}, {0,1,1}, {0,0,0}};
    int k = 1;
    cout<<ss.shortestPath(grid, k)<<endl;
return 0;
}