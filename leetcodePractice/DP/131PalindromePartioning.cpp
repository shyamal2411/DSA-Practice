#include<bits/stdc++.h>
using namespace std;

// 2nd approach is better implimented than this one
// https://leetcode.com/problems/palindrome-partitioning/
// Learnt from solution section of the problem
class Solution {
public:
    
    void dfs(vector<vector<string>>& ans, string &s, int start, vector<string>& current){
        if(start>=s.length())
            ans.push_back(current);
        for(int i=start; i<s.length();i++){
            if(isPalindrome(s, start, i)){
                current.push_back(s.substr(start, i-start+1));
                dfs(ans, s, i+1, current);
                
                current.pop_back();
            }
        }
    }
    
    bool isPalindrome(string &s, int low, int high){
    while(low<high)
        if(s[low++]!=s[high--])
            return false;
        
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> current;
        dfs(ans, s, 0, current);
        return ans;
    }
};

//2ND APPROACH
// https://www.youtube.com/watch?v=WBgsABoClE0  <-STRIVER'S VIDEO
class Solution2 {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        func(0, s, path, ans);
        return ans;
    }
    
    void func(int index, string s, vector<string>& path, vector<vector<string>>& ans){
        if(index==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s, index, i)){
                path.push_back(s.substr(index, i-index+1));
                func(i+1, s, path, ans);
                path.pop_back(); //backtracking step
            }
        }
    }
    bool isPalindrome(string s, int start, int end){
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};

/*
Algorithm

In the backtracking algorithm, we recursively traverse over the string in depth-first search fashion. 
For each recursive call, the beginning index of the string is given as \text{start}start.

1. Iteratively generate all possible substrings beginning at \text{start}start index. 
The \text{end}end index increments from \text{start}start till the end of the string.

2. For each of the substring generated, check if it is a palindrome.

3.If the substring is a palindrome, the substring is a potential candidate. 
Add substring to the \text{currentList}currentList and perform a depth-first search on the remaining substring. 
If current substring ends at index \text{end}end, \text{end}+1end+1 becomes the \text{start}start index for the next recursive call.

4. Backtrack if \text{start}start index is greater than or equal to the string length and add the \text{currentList}currentList to the result.


*/
int main()
{ 
    Solution ss;
    string str = "aab";
    vector<vector<string>> ans = ss.partition(str);
    for(int i=0; i<ans.size(); i++)
        for(int j=0; j<ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
    cout<<endl;
    return 0;
}