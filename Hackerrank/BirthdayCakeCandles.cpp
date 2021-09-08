#include<bits/stdc++.h> 
using namespace std;

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

void solve(){
int n,k,i,p,q,r,j,flag,ans=0;
 cin>>n;
 vi a(n);
 read(a,n);
//  count(a.begin(),a.end(),*max_element(a.begin(),a.end()));
    // ans =max_element(a, a+n);
    // cout<<ans;
int maxx=0;
for(auto v:a)
if(v>maxx)
maxx=v;

int count=0;
for(auto v:a)
if(v>=maxx)
count++;

    cout<<count<<endl;
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) 
    {solve();
  }
return 0;
}