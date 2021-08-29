#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
       
        for(int i=0; i<board.size();++i){
            for(int j=0;j<board[0].size();++j){
                if(adjacentSearch(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
    
    private:
    bool adjacentSearch(vector<vector<char>>& board, const string& word, int i, int j, int index)
    {
        if(index==word.size())
            return true; //end condition
        
        if(i<0 || j<0 || i>board.size()-1 || j> board[0].size()-1)
            return false; //boundary of matrix
        
        if(board[i][j] != word[index])
            return false; //doesn't match
        
        //now the case when they match
        board[i][j]='*';
            bool furtherSearch = adjacentSearch(board, word, i+1, j, index+1) || 
                                 adjacentSearch(board, word, i-1, j, index+1) ||
                                 adjacentSearch(board, word, i, j+1, index+1) ||
                                 adjacentSearch(board, word, i, j-1, index+1);
        board[i][j]=word[index];
        return furtherSearch;
    }
};


int main() {
   vector<vector<char>> board;
   board.push_back( {'A','B','C','E'} );
   board.push_back( {'S','F','C','S'} );
   board.push_back( {'A','D','E','E'} );
   board.push_back( {'B','F','E','E'} );
   string word = "ABCCED";
   Solution s;
   if(s.exist(board, word))
       cout << "exist" << endl;
   else
       cout << "not exist" << endl;
   return 0;
}