#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> check;
        for(char c : s)
            ++check[c];
        
        int ans = 0;
        for(auto it : check)
        {
            if(!(it.second % 2))
                ans += it.second;
            else if(it.second >= 2) //odd case
                ans += it.second - 1;
        }
        return ans < s.size() ? ans + 1 : ans;
        //if there is at least an odd case, leave 1 for it
    }
};

int main(){
    Solution s;
    cout << s.longestPalindrome("abccccdd") << endl;
    return 0;
}