#include<bits/stdc++.h>
using namespace std;

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