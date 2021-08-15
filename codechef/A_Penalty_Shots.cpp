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
 int arr[5], brr[5];
 int count1=0, count2=0;
 for(i=0;i<10;i++){
     if(i&1){
     cin>>arr[i];
     count1+=arr[i];
     }
     else{
     cin>>brr[i];
     count2+=brr[i];
    }
 }
 if(count1>count2){
     cout<<1<<nl;
 }
 else
 {
     cout<<2<<nl;
 }
 cout<<0<<nl;
}

void solve1(){
int arr[10];
int count1=0, count2=0;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
for(int i=0;i<10;i++){
    if(arr[i]%2==0){
        count1+=arr[i];
    }
    else
    {
        count2+=arr[i];
    }
}

if(count1>count2){
    cout<<1<<nl;
}
else
  cout<<2<<nl;

cout<<0<<nl;

}

void solve2(){
      int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
	    int s=a1+a3+a5+a7+a9;
	    int b=a2+a4+a6+a8+a10;
	    if(s==b)
	    cout<<"0\n";
	    else if(s>b)
	    cout<<"1\n";
	    else
	    cout<<"2\n";
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve2();
  
return 0;
}