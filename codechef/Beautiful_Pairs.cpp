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
// #define second sc

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 in n;
 vi arr(n);
 read(arr,n);

 for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
         if(i==j){continue;}
     int ans1=((arr[i]-arr[j])*arr[j]);
     int ans2=((arr[i]-arr[j])*arr[i]);
     if(ans2>ans1){
         count++;
     }
 }
}
out (count*2)<<nl;
}

void solve1(){
 int n;
 cin>>n;

    vector<int> vec(n);
    read(vec,n);

    map<int,int> m;
    
    f(i,0,n){
        m[vec[i]]++;
    }

    int ans=0;

    for(auto itr:m){
        int temp=itr.second;
        int diff=n-temp;

        ans+=temp*diff;
    }

    cout<<ans<<"\n";
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}