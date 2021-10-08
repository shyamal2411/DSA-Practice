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
 if(n%4!=0)
 {cout<<"NO\n"; return;}
 cout<<"YES\n";
 vi v1, v2;
 int a=1, b=n;
 flag=n/2;

 while(flag){
     if(ans==0){
         v1.push_back(a);
         a++;
         ans=1;
     }
     else{
         v1.push_back(b);
         b--;
         ans=0;
     }
     flag--;
 }
for(i=a;i<=b;i++){
    v2.push_back(i);
 }
 sort(v1.begin(), v1.end());
 sort(v2.begin(), v2.end());

    for(auto i:v1){
        cout<<i<<" ";
        cout<<nl;
        return;
    }

}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}