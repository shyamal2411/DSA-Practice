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

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
float ans1=0, ans2=0, ans3=0, zero=0.,neg=0.,pos=0.;
 cin>>n;
    vi a(n);
    read(a,n);
    for(i=0;i<n;i++){
        if(a[i]==0){zero++;}
        else if(a[i]<0){neg++;}
        else{pos++;}
    }
    ans1=(double)pos/n;
    ans2=(double)neg/n;
    ans3=(double)zero/n;
    cout<<ans1<<"\n";
    cout<<ans2<<"\n";
    cout<<ans3<<"\n";
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    cout<<fixed<<setprecision(6);
    while(t--) solve();
  
return 0;
}