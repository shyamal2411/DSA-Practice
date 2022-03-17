#include<bits/stdc++.h> 
using namespace std;

/*
    "()" has a score of 1.

    "xy" has a score of x + y , here x & y are balanced pairs of balanced parenthese.

    "(x) " has a score of x , (i.e) 2 * score of x.
    Example.
    Input: str = “()()”
    Output: 2
    Explanation: There are are two individual pairs of balanced parenthesis “() ()”. Therefore, score = score of “()” + score of “()” = 1 + 1 = 2

    Input: str = “(())”
    Output: 2
    Explanation: Since the input is of the form “(x)”, the total score = 2 * score of “()” = 2 * 1 = 2

    Take a Stack, Iterate over the characters of string.
    For every ith character check if the character is ‘(‘ or not. If found to be true, then insert the character score into the stack.
    Initialize a stack to store the current traversed character score of inner balanced parenthesis.
    For every i check for the conditions.
        if the current character is '(' push the current score into stack , enter the next inner layer and reset score to 0.
        if the current character is ')' then ind score will be doubled and will be at least one .
        we exit the current level and set ind = stack.top() + max(ind * 2, 1).
        and pop the score from the stack.

    Time : O(N)
    Space : O(N)
    */
   
// https://leetcode.com/problems/score-of-parentheses/
   class Solution {
        public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int ind = 0;
        
        for(auto i : s)
        {
			// if we find open parenthesis
			// push the current score into the stack
            if(i == '(')
            {
                st.push(ind);
				// reset the score to 0
                ind = 0;
            }
            else // if we find close parenthesis
            {
                ind = st.top() + max(ind*2 ,1);
                st.pop();
            }
                
        }
        return ind;
    }
};

int main(){
    Solution ss;
    string s = "()()";
    cout<<ss.scoreOfParentheses(s);
    return 0;
}