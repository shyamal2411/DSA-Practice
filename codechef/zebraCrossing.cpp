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
 cin>>n>>k;
 string s; cin>>s;
 char ans=s[0];
 f(i, 1, n){
     if(ans!=s[i]){
         count++;
         ans=s[i];
     }
 }
 if(count<k){
     cout<<-1<<nl; return;
 }
 if(s[0]=='0'){
     if(k%2){
         for(i=s.size()-1;i>=0;i--){
             if(s[i]=='1'){
                 cout<<i+1<<nl; 
                 return;
         }
     }
 }
    else{
        for(i=s.size()-1;i>=0;i--){

            if(s[i]=='0'){
                cout<<i+1<<nl;
                return;
            }
        }
    }
    else{
        if(k%2){
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='0'){
                    cout<<i+1<<nl;
                    return;
                }
            }
        }
    }
}
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}