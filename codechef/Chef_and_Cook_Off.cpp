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
 vi a(5);
 read(a,5);
 for(i=0;i<5;i++){
     if(a[i]==1){
         count++;
     }
 }
 if(count==0) cout<<"Beginner\n";
 if(count==1) cout<<"Junior Developer\n";
 if(count==2) cout<<"Middle Developer\n";
 if(count==3) cout<<"Senior Developer\n";
 if(count==4) cout<<"Hacker\n";
 if(count==5) cout<<"Jeff Dean\n";
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}