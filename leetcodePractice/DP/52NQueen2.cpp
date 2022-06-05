#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/n-queens-ii/
class Solution {
public:
    
    typedef vector<string> vi;
    int totalNQueens(int n) {
         // vector<vi> ans;
        vi board(n);
        // int count = 0;
        string s(n, '.');
        
        for(int i = 0; i < n; i++)
            board[i] = s;
        
        return solve(0, board);
        // return count;
    }
    
    public:
    
    int solve(int col, vi& board){
        int size = board.size();
        if(col == size){
            // ans.push_back(board);
            return 1;
        }
        int count = 0;
        for(int row = 0; row < size; row++){
            if(isSafe(row, col, board)){
                board[row][col] = 'Q';
               count += solve(col + 1, board);
                board[row][col] = '.';
                // count++;
            }
        }
        return count;
    }
    
    
    bool isSafe(int row, int col, vi board){
        int duprow = row;
        int dupcol = col;
        int size = board.size();
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
        
        while(row < size && col >= 0){
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
    int n = 4;
    int ans = s.totalNQueens(n);
    cout<<ans<<endl;
    return 0;
}