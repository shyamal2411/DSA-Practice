#include<bits/stdc++.h> 
using namespace std;

// https://cses.fi/problemset/task/1623/
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
 cin>>n;
 vi a(n);
 read(a,n);
 sort(a.begin(),a.end());
 int ans1=a[0]+a[n-1];
 for(i=1;i<n-1;i++){
     count+=a[i];
     cout<<a[i]<<" ";
 }
 ans=abs(ans1-count);
//  cout<<ans<<nl;
}



int32_t main(){

int w[1234567];
  int n; cin>>n;
  for(int i=0;i<n;i++)cin>>w[i];

  int ans=1e9;
  for(int i=0;i<(1<<n);i++){
      int x=i;
      int sum1=0, sum2=0;
      for(int i=0;i<n;i++){ 
      if((1<<i)&x){
      sum2+=w[i];
      }
      else
      sum1+=w[i];
  }
  ans=min(ans,abs(sum1-sum2));
}
cout<<ans;
return 0;
}