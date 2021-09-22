#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/START12C/problems/MAKEDIV3
#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc
 
void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 cin>>n;
 if(n==1)
 cout<<3<<nl;
 else if(n==2)
 cout<<33<<nl;
 else{
     cout<<3;
     for(i=1;i<=n-2;i++){
        cout<<"0";
     }
     cout<<3<<nl;
 }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}