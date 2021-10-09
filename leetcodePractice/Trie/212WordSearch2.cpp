#include<bits/stdc++.h>
using namespace std;

//TRIE QUESTION, HAVEN'T DONE TRIE YET, SO COPY PASTE...
class Solution {
public:
    int m, n;
    vector<vector<bool>> visited;
    unordered_set<string> res;
    unordered_set<string> wordSet;
    int maxSz = 0;
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size();
        n = board[0].size();
        
        visited = vector<vector<bool>>(m, vector<bool>(n, false));
		// Add all the words to a set and find to maximum word length to help 
		// optimize while recursion
        for(auto word: words){
            wordSet.insert(word);
            maxSz = max(maxSz, int(word.size()));
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                string str(1, board[i][j]);
                visited[i][j] = true;
                solve(board, i, j, str); 
				// stop if all words are found
                if(res.size() == wordSet.size())
                    break;
                visited[i][j] = false; 
            }
        }
        
        vector<string> resVec(res.begin(), res.end());
        return resVec;
    }
    
        
    void solve(vector<vector<char>>& board, int r, int c, string str){
	// Return if the current word size is greater then maximum length of given words
	// as this will never give a word from the word set
        if(str.size()>maxSz)
            return;
        
        if(wordSet.count(str))
            res.insert(str);
        
		// Return if we already found all the words
        if(res.size() == wordSet.size())
            return;
        
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
    
        for(int i = 0; i < 4; ++i){
            int rr = r + dr[i];
            int cc = c + dc[i];
            if(canVisit(rr, cc)){
                visited[rr][cc] = true;
                str += board[rr][cc];
                
                solve(board, rr, cc, str);
                
                visited[rr][cc] = false;
                str = str.substr(0, str.size()-1);
            }
        }
    }
    
    bool canVisit(int row, int col) {
        if(row<0 || row>=m || col < 0 || col >= n || visited[row][col])
            return false;
        
        return true;
    }
};

