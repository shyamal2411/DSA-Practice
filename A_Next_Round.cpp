#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;
    
    int a[50];
    fo(i,n)
    cin>>a[i];

    fo(i,n)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
        count++;
    }
    cout<<count<<"\n";
return 0;
}