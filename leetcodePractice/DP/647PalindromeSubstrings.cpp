#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/palindromic-substrings/
// Tabulation method: https://leetcode.com/problems/palindromic-substrings/discuss/631588/C%2B%2B-DP-with-video-link
class Solution {
public:
    int count = 0;
    void findSubstrings(string s, int start, int n){
        for(int end = start; end < n; end++){
            if(isPalindrome(start, end, s)){count++;}
        }
    }
    
    bool isPalindrome(int start, int end, string s){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;}
        }
        return true;
    }
    
    int countSubstrings(string s) {
    for(int i = 0; i < s.size(); i++){
        findSubstrings(s, i, s.size());
        }
        
        return count;
    }
};

// Tabulation method
class Solutionn {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n));
        for(int i = 0;i<n;i++) {
            dp[i][i] = 1;
            count++;
        }
        for(int col = 1;col<n;col++) {
            for(int row = 0;row < col;row++) {
                if(row ==col - 1 && s[row] == s[col]) {
                    dp[row][col] = 1;
                    count++;
                } else if(s[row] == s[col] && dp[row + 1][col-1] == 1) {
                    dp[row][col] = 1;
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    string str = "aaa";
    cout<<s.countSubstrings(str);
    return 0;
}