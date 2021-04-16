#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

#define int long long 
#define nl endl
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
int n,k,t,i,p,q,r,count=0,j,flag;
int magnet;
cin >> magnet;
count = 1;
int arr[100000];
for (int i = 0; i < magnet; i++) {
  cin >> arr[i];
}
for (int i = 0; i < magnet - 1; i++) {
  if (arr[i] != arr[i + 1])// jo previous magnet nu last element next ni equal na hoy to ans plus karo
    count++;// jo bnne equal hoy i.e. 1-1 or 0-0
}
cout << count << endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0); cout.tie(0);
    
    int t;
    t=1;
    //in t;
    while(t--){
        solve();  
    }    
}