#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/valid-parentheses/
class Solution {
 public:
  bool isValid(string s) {
    stack<char> st;  // to keep track of brackets
    for (char c : s) {
      if (st.empty() || c == '(' || c == '{' || c == '[')
        st.push(c);

      else {
        if ((c == ')' && st.top() != '(') || (c == ']' && st.top() != '[') ||
            (c == '}' && st.top() != '{'))
          return false;
        st.pop();
        // if control reaches to that line, it means we have got the right pair
        // of brackets, so just pop it.
      }
    }
    return st.empty();
    // at last, it may possible that we left something into the stack unpair so
    // return checking stack is empty or not..
  }
};

int main(){
    Solution ss;
    string s;
    cin>>s;
    cout<<ss.isValid(s);
    return 0;
}