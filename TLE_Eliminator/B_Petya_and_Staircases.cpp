#include<bits/stdc++.h> 
using namespace std;

//DAY-1
// https://codeforces.com/problemset/problem/362/B
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
int n,d,k,i,p,q,r,count=0,j,ans=0;
 in n>>d;
 int arr[d];
 for(i=0;i<d;i++){
     cin>>arr[i];
     if(arr[i]==1 || arr[i]==n){
         cout<<"NO\n"; return;
     }
 }
 sort(arr,arr+d);
bool flag=1;
for(i=2;i<d;i++){
    if(arr[i]==arr[i-1]+1 && arr[i-1]==arr[i-2]+1)
        flag=0;
 }
        if(flag)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
}
int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}