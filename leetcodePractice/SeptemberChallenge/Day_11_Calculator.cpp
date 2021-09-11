#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
    stack<char> ops;
    stack<int> nums;
    int curnum = 0;
     
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == ' ') continue;   // Skip spaces
        if (c == '(' || c == '+' || c == '-') {ops.push(c); continue;}  // Store these operators for later
        
        // Only do calculation when 1. a braced block is terminated, 2. When the second operand isn added
        if (c == ')') ops.pop(); 
        else if (isdigit(c)) {
            curnum = curnum * 10 + c -'0';
            if (i+1<s.size() && isdigit(s[i+1])) continue;    //This number is not finished
            nums.push(curnum);      // Otherwise, this number is ready and must be pushed to stack
            curnum = 0;             // Reset cursum;
        }
        
        if (ops.empty() || ops.top()=='(') continue;    // If, however, there is no more computational operators in stack
        // then either we have just added the LEFT operand, or if the braced block just terminated is a LEFT operand.
        // Either way, we cannot do computation yet.
        // Otherwise, it is safe to do the computation, assuming the expression is always valid:
        
        int n2 = nums.top(); nums.pop();                
        if (ops.top() == '+') nums.top() += n2;
        else if (ops.top() == '-') nums.top() -= n2;
        ops.pop();
    }
    return nums.top();
}
};

//THIS BELOW GIVEN SOLUTION GIVES AC ON LEETCODE FOR THE INPUT "2147483647", BUT THE ABOVE SOLUTION GIVES THE SAME OUTPUT
class Solutionn {
public:
    int calculate(string s) {
       int res = 0;
      int num = 0, sign = 1; // 1 for positiove and - 1 for negative
      stack<int> stk;
      for(int i = 0; i < s.size(); ++i) {
         while(i < s.size() && isdigit(s[i])) {
           num = num * 10 + (s[i] - '0');
           ++i;
         }
         res += (num * sign);
         num = 0;
         if(s[i] == '+') {
            sign = 1;
         }else if( s[i] == '-') {
            sign = - 1;
         }else if(s[i] == '(') {
            stk.push(res);
            res = 0;
            stk.push(sign);
            sign = 1;
         }else if(s[i] == ')') {
            res *= stk.top();
            stk.pop();
            res += stk.top();
            stk.pop();
        }
      }
      return res;       
    }
};

int main(){
    Solution s;
    // cout<<s.calculate("(1+(4+5+2)-3)+(6+8)")<<endl;
    cout<<s.calculate("2147483647")<<endl;
    return 0;
}

/*
The basic idea is to scan from left to right. Push every (, + and - to an 'operator' stack, and every number to an 'number' stack. 
In this process, whenever a RIGHT operand is added to the 'number' stack, 
we can do a computation using the top two numbers in the 'number' stack with the operation specified by the top of the operator stack.

There are only two situations when a RIGHT operand appears in the number stack:

A number that is the RIGHT operand, .e.g 4 as in 3 + 4, is pushed;
A braced block that is the RIGHT operand, e.g. (4+5) as in 3 + (4 + 5), is terminated and its result is added to the number stack.
How do we know if a number added is the RIGHT or LEFT operand? The idea is, whenever a RIGHT operand appears, 
there must be an unused '+' or '-' left in the 'operator' stack.

*/