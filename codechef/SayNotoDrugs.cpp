#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/CDMN21C/problems/NODRUGS
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
int maxx=INT_MIN;

void solve(){
int n,k,l,i,p,q,r,count=0,j,flag,ans=0;
 cin>>n>>k>>l;
 int arr[n];
 int ind_max=n-1;
    read(arr,n);
    flag=1;

    f(i,0,n-1){
        if(arr[i]>=arr[ind_max]){flag=0;}
    }
    if(flag)
    cout<<"Yes";
    else
    {
        flag=1;
        arr[ind_max]=arr[ind_max] + (l-1)*k;
        f(i,0,n-1){
            if(arr[i]>=arr[ind_max]){flag=0;}
    }
    if(flag)
    cout<<"Yes";
    else 
    cout<<"No";
    }
    cout<<endl;
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}