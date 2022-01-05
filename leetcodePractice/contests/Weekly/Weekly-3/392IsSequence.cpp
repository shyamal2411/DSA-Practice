#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-3/problems/is-subsequence/
// 2 Pointer -Best approach
class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i = 0, j = 0;
        int m = s.size();
        int n = t.size();
        
        while(i < m && j < n){
            if(s[i] == t[j])
                i++;
            
            j++;
        }
        if(i == m)
            return true;
        else
            return false;
    }
};

// The idea is simple, we traverse both strings from one side to other side (say from rightmost character to leftmost). If we find a matching character, we move ahead in both strings. Otherwise we move ahead only in str2.
class Solutionn {
public:
    bool isSubSeq(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSeq(str1, str2, m-1, n-1); 
    // If last characters are not matching 
    return isSubSeq(str1, str2, m, n-1); 
} 
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s,t,m,n);
    }
};

int main(){
    Solution ss;
    string str1 = "abc";
    string str2 = "ahbgdc";
    cout<<ss.isSubsequence(str1, str2);
    return 0;
}