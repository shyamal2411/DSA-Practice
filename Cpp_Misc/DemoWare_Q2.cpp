// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int help(char c)
{
        if(c>='a' && c<='z')
        return c- 'a';
        else
        return 26 + c- 'A'; 
}

string solution(string &S) {
 
 int n[60];
 memset(n, 0, sizeof n);
 for(auto itr:S){
         int k=help(itr);
         n[k]++;
 }

        string ans="NO";

 for (int i = 25; i >= 0; i--) {
          if(n[i] && n[i+26]){
                  ans=('A'+i);
                  break;
          }
        }
        return ans;
}

//main function
int main()
{
    string S;
    cin>>S;
    cout<<solution(S)<<endl;
    return 0;
}