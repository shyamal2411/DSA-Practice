#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/contest/363/problem/B
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
 
const int MAXN = 1e6;
int prefix[MAXN];

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
    cin>>n>>k;
    prefix[0]=0;
    f(i,0,n){
        int x;
        cin>>x;
        prefix[i+1]=prefix[i]+x;
    }
    int minn=1e9;
    int best=-1;
    for(i=k;i<=n;i++){
        int val=prefix[i]-prefix[i-k];
        if(val<minn){
            minn=val;
            best=i;
        }
    }
cout<<best+1-k<<nl;
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}