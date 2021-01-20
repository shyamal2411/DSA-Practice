#include<bits/stdc++.h> 
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
   int a,b,n,i,t,count=0,j;

 cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;

return 0;
}