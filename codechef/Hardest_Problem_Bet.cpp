#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/START10C/problems/HARDBET
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
 int a,b,c;
 cin>>a>>b>>c;
    if(b>c && c<a){
    cout<<"Alice"<<endl; return;}
    if(b<a && b<c){
    cout<<"Bob"<<endl; return;}
    else
    {cout<<"Draw"<<endl; return; }
 }


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}