#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/contest/1557/problem/A
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
int n,k,i,p,q,r,count=0,j,flag;
 in n;
  vector<int> a(n);
    read(a,n);

    sort(a.begin(),a.end());
    int sum1=0,sum2=0;

    f(i,0,n-1){
        sum1+=a[i];
    }

    sum2+=a[n-1];
    double ans=0.0;
    ans+=((sum1*1.0)/(n-1)) + (sum2*1.0);

    cout<<ans*1.0<<nl;
}


int32_t main(){
    FIO int t; t=1;
    in t;
    cout<<fixed<<setprecision(9);
    while(t--) solve();
  
return 0;
}
