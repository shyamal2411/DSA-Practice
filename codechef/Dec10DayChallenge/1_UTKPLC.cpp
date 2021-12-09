#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/DEC21C/problems/UTKPLC
#define int long long 
#define nl "\n"
const int M=1e5 + 5;
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
 char a,b,c;
    cin>>a>>b>>c;
    char p,q;
    cin>>p>>q;
    // map<char,int> mp;
    // for(auto i: {a,b,c}){
    //     mp[i]++;
    // }
    // for(auto i: {p,q}){
    //     mp[i]++;
    // }
    if(a == p || a == q)
    cout<<a<<endl;
    else{
        cout<<b<<endl;
    }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}