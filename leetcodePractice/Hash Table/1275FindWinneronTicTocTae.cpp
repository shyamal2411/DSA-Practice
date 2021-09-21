#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
class Solution {
private:
    int n=3;
    vector<vector<int>> board;
public:
    string tictactoe(vector<vector<int>>& moves) {
        board.assign(n, vector<int> (n,0));
        int player=1;
        
        //For each move
        for(vector<int> i: moves){
            int row= i[0];
            int col= i[1];
            
            board[row][col] = player;
            
            if(checkRow(row, player)||checkCol(col, player) ||
              (row==col && checkDiagonal(player)) || 
              (row+col == n-1 && checkAntiDiagonal(player))){
                return player == 1 ?"A" : "B";
                return player == 1 ?"A" : "B";                
            }
            player*=-1;
        }
        return moves.size()==3*3? "Draw" : "Pending";
    }
    bool checkRow(int row, int player)
    {
    for(int col=0;col<n;col++)
        if(board[row][col]!=player)
            return false;
        
        return true;
    }
    bool checkCol(int col, int player){
        for(int row=0;row<n;row++)
            if(board[row][col]!=player)
                return false;
        
            return true;
    }
        bool checkDiagonal(int player){    
    for (int row = 0; row < n; ++row) {
            if (board[row][row] != player) return false;
        }
        return true;
    }
        
    bool checkAntiDiagonal(int player) {
        for (int row = 0; row < n; ++row) {
            if (board[row][n - 1 - row] != player) return false;
        }
        return true;
    }
};   

int main()
{
    Solution s;
    vector<int> moves = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> board = {{0,0,0},{0,0,0},{0,0,0}};
    cout<<s.tictactoe(board);
    return 0;
}