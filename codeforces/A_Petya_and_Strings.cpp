#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl endl
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
 string s,s1,r,r1;
 in s>>r;
 f(i,0,s.size())
 {
     s[i]=tolower(s[i]);
     r[i]=tolower(r[i]);
 }
 if(s==r)
 out "0"<<"\n";
 f(i, 0, s.size())
 {
     if(s[i]<r[i]){
     out "-1"<<"\n";
     break;}
     if (s[i] > r[i]) {
       out "1" << "\n";
       break;
     }
 }
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}