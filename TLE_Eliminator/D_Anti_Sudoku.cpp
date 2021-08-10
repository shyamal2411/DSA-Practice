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
 
 int arr[9][9];
 //input
 for(i=0;i<9;i++){
     for(j=0;j<9;j++){
         cin>>arr[i][j];
     }
 }
    for(i=0;i<9;i++){
     for(j=0;j<9;j++){
         if(arr[i][j]==1){
             arr[i][j]=2;
     } 
     }
}
}

void solve1(){
for(int i=0;i<9;i++){

    string str;
    cin>>str;
    for(auto &itr:str){
        if(itr=='1'){
            itr='2';
        }
    }
    cout<<str<<nl;
    }
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}