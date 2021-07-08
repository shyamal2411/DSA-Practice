#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

#define int long long 
#define nl endl
const int mod=1000000007;
typedef vector<int> vi;
#define pi pair<int,int>
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
int s,s1,s2,n,k,i,p,q,r,count=0,j,flag,ans=0;
 in s>>s1>>s2;
 ans += s;
 ans += min(s1, s2);
 ans += (max(s1, s2) - min(s1, s2)) / 3;
 cout << ans << endl;
}


int32_t main(){
    FIO
    int t; t=1;
    in t;
    while(t--){
        solve();  
    }    
}