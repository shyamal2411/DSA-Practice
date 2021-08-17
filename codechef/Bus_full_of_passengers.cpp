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
int n,m,k,p,q,r,j,count=0,flag,ans=0;
 cin>>n>>m>>q;
 for(j=0;j<q;j++){
     string ch, space;
     cin>>ch>>space;
     int i; cin>>i;
     if(ch=="+"){
            count+=i;
     }else
     {
         count-=i;
     }
     if(count>m){
         cout<<"Inconsistent"<<nl; 
         return;
     }
 }
   if(count<0){
         cout<<"Inconsistent"<<nl; 
     }
      else{   cout<<"Consistent"<<nl;
        }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}