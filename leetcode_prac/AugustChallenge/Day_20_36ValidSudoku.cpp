#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> row[9],col[9], blk[9];
        char c; int i,j;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                c=board[i][j];
                if((c!='.') && (0<row[i][c]++ || 0<col[j][c]++ || 0<blk[i/3*3+j/3][c]++))
                    return false;
            }
        }
        return true;
    }
};

int main(){
    //Variable declaration
    vector<vector<char> > board;
    int i,j;
    char c;
    //board generation
    for(i=0;i<9;i++){
        board.push_back(vector<char>());
        for(j=0;j<9;j++){
            c=rand()%9+48;
            board[i].push_back(c);
        }
    }
    //output
    cout<<"The board is: ";
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Solve
    Solution obj;
    bool b=obj.isValidSudoku(board);
    //output
    cout<<"The result is: "<<b<<endl;
    return 0;
}