#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/letter-case-permutation/
// BEST EXPLANATION
// https://leetcode.com/problems/letter-case-permutation/discuss/1068157/C%2B%2B-or-Recursion-or-O(2n)-0ms-Beats-100-or-Easy-to-Understand
class Solution {
public:
    
        vector<string> ans;
    void solve(string cur, string s, int i){
    
        //if end of string is reached
        if(i==s.length()){
            ans.push_back(cur);
            return;
        }
        
        if(isdigit(s[i])){// case 1
            cur.push_back(s[i]);
            solve(cur,s, i+1);
        } else //case 2
        {
            //sub case 1
            //considering lowercase
            string c1=cur;
            c1.push_back(tolower(s[i]));
            solve(c1, s, i+1);
            
            //sub case 2
            //considering uppercase
            string c2=cur;
            c2.push_back(toupper(s[i]));
            solve(c2, s, i+1);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        ans.clear();
        solve("",s, 0);
        return ans;
    }
}; //notes

/*TIME COMPLEXITY
O(2^n) [From recursion tree, at each level nodes are increasing by power of 2]

SPACE COMPLEXITY
O(n) [Maximum depth of recursion tree]
*/
int main(){
    Solution ss;
    string s="a1b2";
    string s1="3z4";
    string s2="12345";
    string s3="0";
    vector<string> ans=ss.letterCasePermutation(s);
 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
    return 0;
}

