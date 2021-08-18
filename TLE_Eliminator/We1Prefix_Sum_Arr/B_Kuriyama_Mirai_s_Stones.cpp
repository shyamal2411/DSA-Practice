#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/contest/433/problem/B
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
int n,k,i,p,q,count=0,j,flag,ans=0;
 cin>>n;
 int a[100005],b[100005];
 for(i=1;i<=n;i++){
  cin>>a[i];
  b[i]=a[i];
 }
 sort(b+1,b+n+1);
 for(i=1;i<=n;i++){
     a[i]=a[i]+a[i-1];
     b[i]=b[i]+b[i-1];
 }
 cin>>q;
 while(q--){
     int t,l,r;
     cin>>t>>l>>r;
     if(t==2){
            cout<<b[r]-b[l-1]<<nl;
     }
     else
     {
         cout<<a[r]-a[l-1]<<nl;
     }
     
 }
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}