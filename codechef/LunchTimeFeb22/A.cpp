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
 if(n<=15)
 cout<<"Yes\n";
 else
    cout<<"No\n";
}

void solve2(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    // cout<<abs(w-y)<<" "<<abs(x-z)<<nl;
    int ans = max(abs(w-y),abs(x-z));
    cout<<ans<<nl;
}
void solve3(){
    int a;
    cin>>a;
    if(a%4 == 0)
    cout<<"Good\n";
    else
    cout<<"Not Good\n";
}
void solve4(){
    int x,y;
    cin>>x>>y; // 100 20
    int ans = y/2; // 10
    int ans1 = x - ans1; // 100-10 = 90
    cout<<abs(ans1)<<endl; // 90
}

void solve5(){
    int x,y;
    cin>>x>>y;
    int ans = y/2;
    int ans1 = x-y;
    cout<<ans+ans1<<endl;
}

void solve6(){
    int n; cin>>n; int count=0;
    vi a(n);
    read(a,n);
    sort(a.rbegin(),a.rend());
    for(int i = n-1; i > 0; i--){
        count += a[i];
    }
    cout<<count+a[0]<<endl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve6();
  
return 0;
}