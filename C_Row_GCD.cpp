#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define int long long 
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

void solve(){
int n,m,k,t,i,p,q,r,s,count=0,j,flag;
cin >> n >> m;

vector<int> a(n), b(m);

read(a, n);
read(b, m);

sort(a.begin(), a.end());

int final_gcd = 0;
f(i, 1, n) { final_gcd = gcd(final_gcd, a[i] - a[0]); }

f(i, 0, m) {
  int ans = gcd(final_gcd, a[0] + b[i]);
  cout << ans << " ";
}
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    t=1;
    in t;
    while(t--){
        solve();  
    }    
}