#include<bits/stdc++.h> 
using namespace std;

//DAY-2 10/8/2021
// https://codeforces.com/problemset/problem/1375/B
// https://codeforces.com/contest/1375/submission/125438700
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
int n,m,k,i,p,q,r,count=0,j,flag,ans=0;
 cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
    }
}

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int total=0;
            if(i-1>=0) total++;
            if(i+1<n) total++;
            if(j-1>=0) total++;
            if(j+1<m) total++;
            if(a[i][j]>total){
                cout<<"NO\n"; return;
            }
            a[i][j]=total;
        }
    }
    cout<<"YES\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}