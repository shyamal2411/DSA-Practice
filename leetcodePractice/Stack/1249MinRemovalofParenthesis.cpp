#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
class Solution {
public:
  string minRemoveToMakeValid(string s) {
        
        stack<int>st; // helper stack for finding matching parentheses
        
        for(int i=0;i<s.length();++i){
            if(s[i]=='('){ // for open parentheses push into stack
                st.push(i);
            }
            else if(s[i]==')'){ // for closing parentheses
                // if no matching previous open parentheses found, we need to remove the index of that open parentheses from "s" so for now we are marking it with special character '#'
                if(st.empty()){ 
                    s[i]='#';
                }
                else{
                    // if matching open parentheses found remove that from the stack
                    st.pop();
                }
            }
        }

        // if stack is not empty, that means it contains open parentheses indexes which don't have any matching closing parentheses
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        
        string ans="";
        for(int i=0;i<s.length();++i){
            if(s[i]!='#'){ // append not marked character to the end of "ans"
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};
//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/discuss/1073189/C%2B%2B-or-2-Approaches-or-O(n)-Beats-100-or-No-Extra-Space-(Best)-or-Explanation

/*Here, we will use a stack for checking the validity of parentheses, and later remove the indexes of invalid parentheses from the string s. 
First, iterate the string s and mark the index of those characters which need to be removed to make it parentheses string using a special symbol '#'.
Here, a stack is used for finding the valid pair of parentheses, and while doing so also mark the indexes of invalid parentheses in s.
Finally, iterate s again and append non-marked symbol (#) to ans.
*/

int main(){
    Solution ss;
    string s ="lee(t(c)o)de)";
    cout<<s<<endl;
    cout<<ss.minRemoveToMakeValid(s)<<endl;
    return 0;
}