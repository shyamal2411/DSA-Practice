#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
//revised: 13-12-2020
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;

 string str;
 cin>>n;
 while(n--)
 {
     cin>>str;
     if(str.length()>10)
     cout<<str[0]<<str.length()-2<< str[str.length()-1]<<endl;

else
cout<<str<<endl;
 }

return 0;
}