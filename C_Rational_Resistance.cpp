#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

#define int long long 
#define nl endl
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

int solve(){
int n,k,t,i,p,q,r,count=0,j,flag;
 in p>>q;
 int ans=0;
 while(p>0&&q>0){
     ans+=p/q;
     p%=q;
     swap(p,q);
 }
 out ans<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0); cout.tie(0);
    
    int t;
    t=1;
    //in t;
    while(t--){
        solve();  
    }    
}