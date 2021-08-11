#include<bits/stdc++.h> 
using namespace std;

//Random contest
// https://codeforces.com/contest/611/problem/A
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

//number of days in a month
int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 int x;
 string of,s;
 cin>>x>>of>>s;
 if(s=="month"){
     ans=0;
     for(i=0;i<12;i++){
         if(month[i]>=x){
             ans++;
         }
     }
     cout<<ans<<nl;
 }
 else
 {
     if(x==5 || x==6){
         cout<<53<<nl;
     }else
     {
         cout<<52<<nl;
     }
 }
 
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}