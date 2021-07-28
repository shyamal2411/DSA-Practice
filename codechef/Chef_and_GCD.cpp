#include<bits/stdc++.h> 
using namespace std;

/* https://www.codechef.com/COOK131C/problems/CHFGCD */

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

int gcd(int a, int b){
    if (b == 0){return a;}
    else{return gcd(b,a%b);}
}


void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 int x,y;
 cin>>x>>y;
    if(gcd(x,y)!=1){
        cout<<0<<endl;
        return;
    }
    if(x%2&&y%2){
        if(gcd(x+1,y)!=1||gcd(x,y+1)!=1){
            cout<<1<<endl;
        }else 
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
    }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}