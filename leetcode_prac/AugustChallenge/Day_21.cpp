#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/sudoku-solver/
class Solution {
public:
    
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
    for(int i = 0; i < 9; i++) 
		if(board[i][col] == c) 
			return false;
    for(int i = 0; i < 9; i++) 
		if(board[row][i] == c) 
			return false;
    int x = (row/3) * 3, y = (col/3) * 3;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[x + i][y + j] == c) return false;
        }
    }
    return true;
}

bool helper(vector<vector<char>> &board, int row, int col) {
    if(row == 9) 
		return true;
    if(col == 9) 
		return helper(board, row + 1, 0);
    if(board[row][col] != '.') 
		return helper(board, row, col + 1);

    for(char c = '1'; c <= '9'; c++) {
        if(isValid(board, row, col, c)) {
            board[row][col] = c;
            // without return here, the board reverts to initial state
            if(helper(board, row, col + 1))
				return true;
            board[row][col] = '.';
        }
    }
    return false;
}
};

//main function
int main(){
	//code
	Solution sol;
	vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
	sol.solveSudoku(board);
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}