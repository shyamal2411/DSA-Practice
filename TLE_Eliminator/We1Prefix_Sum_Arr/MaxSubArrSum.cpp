// https://cses.fi/problemset/task/1643
#include<bits/stdc++.h> 
using namespace std;

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
 in n;
 vi a(n);
 read(a, n);
 vi pref(n);

 pref[0]=a[0];
 for(i=1;i<n;i++){
  pref[i]=pref[i-1]+a[i];
 }
 ans=INT_MIN;
 int min_pref=0;

 for(i=0;i<n;i++){
     int curSum=pref[i];
     ans=max(ans, curSum-min_pref);
     min_pref=min(min_pref, curSum);
 }
 cout<<ans<<nl;
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}