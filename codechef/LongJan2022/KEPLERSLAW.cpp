#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e5 + 5;
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
 float t, tt, r, rr;
 cin>>t>>tt>>r>>rr;
    // t=1, tt=2, r=3, rr=4;
    // int ans = 0;
    float ans1 = (t*t) / (r*r*r);
    float ans2 = (tt*tt) / (rr*rr*rr);
    // cout<<ans1<<" "<<ans2<<endl;
    if(ans1 == ans2)
    cout<<"YES"<<nl;
    else
    cout<<"NO"<<nl;
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}