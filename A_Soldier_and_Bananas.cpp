#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define int long long 
#define nl endl
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<

void solve(){
int n,k,w,t,i,p,q,r,s,count=0,j,flag;

    cin>>k>>n>>w;
  for(i=1; i<=w; i++)
      count =count +(i*k);
  
  if(count <=n)
  cout<<0<<endl;

  else
  cout<<count-n<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    t=1;
    //in t;
    while(t--){
        solve();  
    }    
}