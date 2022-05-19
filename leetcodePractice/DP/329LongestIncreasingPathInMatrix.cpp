#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
class Solution {
public:
    int dp[200][200];
    int count, n,m;
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        count = 0, n = matrix.size(), m = matrix[0].size();
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j ++){
                count = max(count, solve(matrix, i, j, -1));
            }
        }
        return count;
    }
    
    int solve(vector<vector<int>> &matrix, int i, int j, int prev){
        if(i < 0 || j < 0 || i >= n || j >= m || matrix[i][j] <= prev)
            return 0;
        
        if(dp[i][j])
            return dp[i][j];
    
    
        return dp[i][j] = 1 + max({solve(matrix, i+1, j, matrix[i][j]),
                                   solve(matrix, i-1, j, matrix[i][j]),
                                   solve(matrix, i, j+1, matrix[i][j]),
                                   solve(matrix, i, j-1, matrix[i][j])});
    }
};

// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/discuss/1151418/Longest-Increasing-Path-in-a-Matrix-or-Short-and-Simple-w-Explanation

int main(){
    Solution ss;
    vector<vector<int>> matrix = {{9,9,4},{6,6,8},{2,1,1}};
    int ans;
    cout<<ss.longestIncreasingPath(matrix);
}