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

void solve(){
int n,k,t,p,q,r,count=0,j,flag;

cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);
cout<<a[0]+a[1]<<endl;
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