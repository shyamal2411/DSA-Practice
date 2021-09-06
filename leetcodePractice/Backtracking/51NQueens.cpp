#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/n-queens/
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
            board[i]=s;
        
        solve(0, board, ans, n);
        return ans;
    }
    
    public:
    void solve(int col, vector<string>& board, vector<vector<string>> &ans, int n){
     if(col == n){
         ans.push_back(board);
        return;
      }
        for(int row=0;row<n;row++){
            if(isSafe(row, col, board, n)){
                board[row][col] ='Q';
                solve(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    
    bool isSafe(int row, int col, vector<string> board, int n){
        int duprow=row;
        int dupcol=col;
        
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        col=dupcol;
        row=duprow;
        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
};


int main(){
    Solution s;
    int n; cin>>n;
    vector<vector<string>> ans = s.solveNQueens(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}