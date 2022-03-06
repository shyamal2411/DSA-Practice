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
 int n; cin>>n;
 if(10-n >= 3)
 cout<<"YES\n";
else
 cout<<"NO\n";
}

void solve1(){
    int n,m; cin>>n>>m;
    int ans = (10*n) + (5*m);
    cout<<ans<<endl;
}

void solve2(){
    int n,m; cin>>n>>m;
    if((n+m)%2 == 0)
    cout<<"Janmansh\n";
    else
    cout<<"Jay\n";
}

void solve3(){
    int n; cin>>n;
    vi arr(3);
    read(arr, 3);
    sort(arr.begin(), arr.end());
    int ans = (n-1)*arr[0] + arr[1];
    cout<<ans<<endl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve3();
  
return 0;
}