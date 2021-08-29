#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/delete-operation-for-two-strings/
class Solution {
public:
     int LCS(string word1, string word2, int m, int n) {
        vector<vector<int>> t(m+1, vector<int>(n+1, 0));
        
        for(int row = 0; row<m+1; row++)
            t[row][0] = 0;
        
        for(int col = 0; col<n+1; col++)
            t[0][col] = 0;
        
        for(int i = 1; i<m+1; i++) {
            for(int j = 1; j<n+1; j++) {
                if(word1[i-1] == word2[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        
        return t[m][n];
    }
    
    int minDistance(string word1, string word2) {
          int m = word1.length();
        int n = word2.length();
        
        int lcs = LCS(word1, word2, m, n);
        
        int deletions_in_s1 = m-lcs;
        int deletions_in_s2 = n-lcs;
        
        return deletions_in_s1 + deletions_in_s2;
    }
};
int main()
{
    Solution mysolution;
    string word1 = "sea";
    string word2 = "eat";
    cout<<mysolution.minDistance(word1, word2)<<endl;
    return 0;
}