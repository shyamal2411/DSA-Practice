#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define MAX 20

//!1st Approach
// int top = -1;
// char stack[MAX];

// /*Begin of push*/
// char push(char item) {
//   if (top == (MAX - 1))
//     printf("Stack Overflow\n");
//   else
//     stack[++top] = item;
// }
// /*End of push*/

// /*Begin of pop*/
// char pop() {
//   if (top == -1)
//     printf("Stack Underflow\n");
//   else
//     return stack[top--];
// }
// /*End of pop*/

// /*Begin of main*/
// main() {
//   char str[20];
//   int i;
//   printf("Enter the string : ");
//   gets(str);
//   for (i = 0; i < str.length(); i++)
//     push(str[i]);
//   for (i = 0; i < str.length(); i++)
//     str[i] = pop();
  
//   puts(str);
// }
//! 2nd approach
// void reverse(string& str) {
//    stk<int> s;

//   for (char ch : str) {
//     s.push(ch);
//   }

//   for (int i = 0; i < str.length(); i++) {
//     str[i] = s.top();
//     s.pop();
//   }
// }

// int main() {
//   string str = "Reverse me";

//   reverse(str);
//   cout << str;

//   return 0;
// }