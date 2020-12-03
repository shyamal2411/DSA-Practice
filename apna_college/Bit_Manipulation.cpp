#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setbit(int n,int pos)
{
    return (n | (1<<pos));
}
int main(){
    ll int n,k,t,i,p,q,r,s,count=0,j;

//cout<<getbit(5,2)<<endl;
  cout<<setbit(5,1);
    return 0;   
}