#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int top=-1;
char stack[MAX];

char push(char item) {
    if(top ==MAX-1)
    cout<<"Stack overflow"<<endl;
    else
    stack[top++] = item;
}

char pop()
{
    if(top ==-1)
    cout<<"Stack empty"<<end;
    else
    return stack[top--];
}

int main()
{
    char str[20];
    int i;
    cout<<"Enter String"<<endl;
    cin>>str;
    int n = str.length();
    for (i = 0; i < n; i++)
      push(str[i]);
    for (i = 0; i < n; i++)
      str[i] = pop();
    cout << "Reversed string is : " << endl;
    
}


// void reverse(string& str) {
//    stack<int> s;

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