#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/remove-palindromic-subsequences/
class Solution {
public:
    int removePalindromeSub(string s) {
       
        int i=0, j=s.size()-1;
        while(i<j) {
			//If string is not palindrome return 2
            if(s[i]!=s[j]) return 2;
            i++;
            j--;
        }
        
        return 1;
        
        /*
        if(s.size()==0) return 0;
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str) return 1;
        return 2; 
        */
    }
};

int main(){
    Solution ss;
    string s = "ababa"; 
    ss.removePalindromeSub(s);
    return 0;
}