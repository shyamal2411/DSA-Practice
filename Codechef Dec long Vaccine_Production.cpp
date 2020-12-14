#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ll int n,k,t,i,q,r,s,count=0,j;
   ll int ans,vac,d1, d2,v1,v2,p,sum=0;

cin>>d1>>v1>>d2>>v2>>p;

for(i=1;i<=100000;i++) //because p1* all 4 constraints(see the constraints given)
{
if(d1<=i)
sum+=v1;// checking

if(d2<=i)
sum+=v2;

if(sum>=p)
break;
}
cout<<i;
}