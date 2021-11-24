#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
         stack<int> st;
  for (auto i = 0; i < s.size(); ++i) {
    if (s[i] == '(') st.push(i);
    if (s[i] == ')') {
      if (!st.empty()) st.pop();
      else s[i] = '*';
    }
  }
  while (!st.empty()) {
    s[st.top()] = '*';
    st.pop();
  }
  s.erase(remove(s.begin(), s.end(), '*'), s.end());
  return s;
    }
};
/*
Intuition
To make the string valid with minimum removals,
 we need to get rid of all parentheses that do not have a matching pair.
Push char index into the stack when we see '('.
Pop from the stack when we see ')'.

If the stack is empty, then we have ')' without the pair, and it needs to be removed.
In the end, the stack will contain indexes of '(' without the pair, if any. 
We need to remove all of them too.

Approach 1: Stack and Placeholder
We mark removed parentheses with '*', and erase all of them in the end.
*/

int main(){
    Solution ss;
    string s ="lee(t(c)o)de)";
    cout<<s<<endl;
    cout<<ss.minRemoveToMakeValid(s)<<endl;
    return 0;
}