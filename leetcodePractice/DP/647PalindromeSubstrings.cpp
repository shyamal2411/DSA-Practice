#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/palindromic-substrings/
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

int main(){
    Solution s;
    string str = "aaa";
    cout<<s.countSubstrings(str);
    return 0;
}