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
 cin>>n;
 vi a(n);
 read(a,n);
 vi odd, even;

    f(i,0,n){
        if(a[i]%2)
        odd.push_back(a[i]);
        else
        even.push_back(a[i]);
    }
    if(odd.size()==0 || even.size()==0)
    cout<<-1<<nl;
    else{
    for(i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";}
    for(i=0;i<even.size();i++){
        cout<<even[i]<<" ";
        }
    }
    cout<<endl;
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}