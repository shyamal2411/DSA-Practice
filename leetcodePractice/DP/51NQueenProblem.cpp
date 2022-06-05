#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/n-queens/
// Slight twist of this problem at 
// https://leetcode.com/problems/n-queens-ii/
// https://leetcode.com/problems/n-queens-ii/discuss/2111857/JavaC%2B%2B-N-Queens-1-andand-2-oror-Almost-Same-Solution
class Solution {
public:
    typedef vector<string> vi;
    vector<vector<string>> solveNQueens(int n) {
        vector<vi> ans;
        vi board(n);
        string s(n, '.');
        
        for(int i = 0; i < n; i++)
            board[i] = s;
        
        solve(0, board, ans, n);
        return ans;
    }
    
    public:
    
    void solve(int col, vi& board, vector<vi> &ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    
    bool isSafe(int row, int col, vi board, int n){
        int duprow = row;
        int dupcol = col;
        
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col >= 0){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        
        while(row < n && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
};


int main(){
    Solution s;
    vector<vector<string>> ans = s.solveNQueens(4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}