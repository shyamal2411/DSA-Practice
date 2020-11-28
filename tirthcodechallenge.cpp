#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)
factorial(int n)
{
    int i;
   int factor=1;
    for(i=n;i>=1;i--)
    factor= factor*i;
    return factor;
}
int main(){
    ll int n,k,t,i,p,q,r,s,count=0,j;
    cin>>n;
    float f=0;
    f=f+(float (i)/ float(factorial(i)));
    cout<<f;
}

