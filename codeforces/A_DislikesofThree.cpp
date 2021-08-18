#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/contest/1560/problem/A
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
int arr[1000],brr[1000];

vi vec;

void solve1(){
    int n,flag; cin>>n;
    for(int i=1;i<=10000;i++){
        if(i%3==0){
            continue;
        }
        flag=i%10;
        if(flag==3){
            continue;}

        vec.push_back(i);
    }
        cout<<vec[n-1]<<nl;
}

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
    
    cin>>k;
    for(i=0;i<1000;i++){
            if(!(arr[i]%3==0 || arr[i]/10==3)){
                    arr[i]=brr[i];
            }
    }
    // for(i=0;i<k;i++){
    //     cout<<brr[k];
    // }
    cout<<brr[k];
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}