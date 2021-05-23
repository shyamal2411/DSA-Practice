// problem link:
// https://www.hackerearth.com/challenges/college/ld-college-of-engineering-test-draft-1/algorithm/d46d41186b1e43c79075c1c12d549e29/
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
int n,m,k,i,p,q,r,count=0,j,flag,ans=0;
 in n>>m;
int arr[n+1];
read(arr, n);
if(n>m)
out 0<<"\n";

else{
    ans=1;
    f(i,0,n)
    {
        f(j,i+1,n)
        {
            ans=(ans*abs(arr[i]-arr[j])) %m;
        }
    }
    out ans<<"\n";
}
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}