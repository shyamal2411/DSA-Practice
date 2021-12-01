#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/longest-valid-parentheses/
// https://leetcode.com/problems/longest-valid-parentheses/discuss/1139990/Longest-Valid-Parentheses-or-Short-and-Easy-w-Explanation-using-stack
class Solution {
public:
    int longestValidParentheses(string s) {
         int maxx = 0;
        stack<int> stk;
        stk.push(-1);
        for(int i = 0; i<size(s); i++){
            if(s[i] == '(')
                stk.push(i);
            else{
                stk.pop();
                if(stk.empty())
                    stk.push(i);
                else
                    maxx = max(maxx, i - stk.top());
            }
        }
        return maxx;
    }
};

class Solution2 {
public:
    int longestValidParentheses(string s) {
          int n = s.length(), i = 0, ans = 0, k = 0;
        for(int j = 0; j < n; j++) {
            if(s[j] == '(')  k++;
            else if(s[j] == ')') {
                k--;
                if(k == 0)
                    ans = max(ans, j - i + 1);
            }
            if(k < 0) {
                k = 0;
                i = j + 1;
            }
        }
        k = 0, i = n - 1;
        for(int j = n - 1; j >= 0; j--) {
            if(s[j] == ')') {
                k++;
            }
            else if(s[j] == '(') {
                k--;
                if(k == 0)
                    ans = max(ans, i - j + 1);
            }
            if(k < 0) {
                k = 0;
                i = j - 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    string str = "()(()";
    cout<<s.longestValidParentheses(str);
    return 0;
}