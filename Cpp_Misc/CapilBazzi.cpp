#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
//code not working somehow
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,count=0,j;
    char end,start;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (i = 0; i < s.length(); i++) {

      if (s[i] == ' ' || i == s.length() - 1) {
        end = i;
       
        printf("%.*s\n", (end - start), s + start);
        start = i + 1;
      }
    }
    return 0;
}