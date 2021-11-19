#include<bits/stdc++.h> 
using namespace std;

// 69 A Young Scientist
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
 int x,y,z, countx=0, county=0, countz=0;
 cin>>n;
f(i, 0, n){
    cin>>x>>y>>z;
    countx += x;
    county += y;
    countz += z;
}
if(countx == 0 && county == 0 && countz == 0)
    cout<<"YES"<<nl;
else
    cout<<"NO"<<nl;
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}