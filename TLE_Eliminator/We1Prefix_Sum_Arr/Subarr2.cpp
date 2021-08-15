// #include<bits/stdc++.h> 
// using namespace std;

// #define int long long 
// #define nl "\n"
// const int M=1e9+7;
// typedef vector<int> vi;
// #define f(i,a,n) for(int i=a;i<n;i++)
// #define rf(i,a,n) for(int i=n-1;i>=a;i--)
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
// #define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
// #define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
// #define in cin>>
// #define out cout<<
// #define first fr
// #define second sc

// void solve(){
// int n,k,i,p,q,r,count=0,j,flag,ans=0;
//  in n;
// vi a(n);
// read(a,n);
// map<int, int> store;
// vi pref(n);
// for(i=1;i<=n;i++){
//     pref[i]=pref[i-1] + a[i];
// }
// ans=0;
// store[0]=1;
// for(i=0;i<n;i++){
//     int curSum=pref[i];
//     int currSum=((curSum%n)+n)%n;
//     int want=currSum;
//     if(store.find(want)!=store.end()){
//         ans+=store[want];
//     }
//     store[currSum]++;
// }
// cout<<ans<<nl;
// }


// int32_t main(){
//     FIO int t; t=1;
//     // in t;
//     while(t--) solve();
  
// return 0;
// }
#include<bits/stdc++.h> 
using namespace std;

// https://cses.fi/problemset/task/1662/
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
 unordered_map<int, int> store;
 int cur=0;
 store[0]++;
 for(i=0;i<n;i++){
     in a[i];;
     cur=(cur+a[i]%n+n)%n;
     ans+=store[cur];
 }
 cout<<ans<<nl;
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}