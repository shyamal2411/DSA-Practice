#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

#define int long long 
#define nl endl
const int mod=1000000007;
typedef vector<int> vi;
#define pi pair<int,int>
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans;
 in n;
 vector<int> arr(n);
 read(arr,n);//taking vector as input 

 int c=0,local=0;
 f(i,0,n-1)//looping as asked in question.
 {
     if(arr[i]>arr[i+1])
     c++;
 } 
 f(i,0,n-1)
 {
   f(j, i + 1, n)  // local inversions
   {
     if (arr[i] > arr[j])
       local++;
   }
 }
 if(c==local)
 out "YES"<<nl;
 else
 out "NO"<<nl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0); cout.tie(0);
    
    int t;
    t=1;
    in t;
    while(t--){
        solve();  
    }    
}