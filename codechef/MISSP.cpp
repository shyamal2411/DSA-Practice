#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/problems/MISSP
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

void solve(){
    int n; cin>>n;
    unordered_map<int, int> mp;
    
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
    }
    
    for(auto i:mp){
        if(i.second%2==1){
            cout<<i.first<<" ";
        }
    }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}