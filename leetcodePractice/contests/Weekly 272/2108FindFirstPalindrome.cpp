#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            if(checkpalindrome(words[i]))
                return words[i];
        }
        return "";
    }
    
    bool checkpalindrome(string s){
        int low = 0, high = s.size() - 1;
        while(low < high){
            if(s[low] != s[high])
                return false;
            low++; high--;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<string> v{"abc","car","ada","racecar","cool"};
    cout<<s.firstPalindrome(v)<<endl;
    return 0;
}