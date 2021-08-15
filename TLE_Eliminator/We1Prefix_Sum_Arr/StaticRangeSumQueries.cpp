// https://cses.fi/problemset/task/1646
#include<bits/stdc++.h> 
using namespace std;

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

// void solve(){
// int n,k,i,p,q,r,count=0,j,flag,ans=0;
//     cin>>n>>q;
//     vi a(n), pref(n);
//  for(int i=0;i<n;i++)
//  {
//      cin>>a[i];
//      pref[i]=pref[i-1]+a[i];
// }
//     for(i=0;i<q;i++){
//         int a,b;
//         cin>>a>>b;
//         cout<<a[b]-a[a]<<nl;
//     }
// }

void solve1(){
    int n,q;
    cin >> n>>q;
    int a[n], pf[n];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pf[i] = pf[i - 1] + a[i];
  }
  
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << pf[r] - pf[l - 1] << endl;
  }
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve1();
  
return 0;
}