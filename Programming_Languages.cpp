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
 int a,b,a1,b1,a2,b2;
 cin>>a>>b>>a1>>b1>>a2>>b2;
  ans= a+b;
 int ans1= a1+b1;
 int ans2= a2+b2;
if(ans==ans1){
cout<<1<<endl;return;}

if(ans==ans2){
cout<<2<<endl;return;}
else{
cout<<0 <<endl;return;}
}

void solve1(){
    int a,b,a1,b1,a2,b2;
 cin>>a>>b>>a1>>b1>>a2>>b2;
 if((a==a1 && b==b1) || (a==b1 && b==a1)){cout<<1<<endl;}
 else if((a==a2 && b==b2) || (a==b2 && b==a2)){cout<<2<<endl;}
 else{cout<<0<<endl;}
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}