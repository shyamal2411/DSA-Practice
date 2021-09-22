#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/START12C/problems/GOODWEAT
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
 int a[7];
 int one=0, zero=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        }

    for(int i=0;i<n;i++){
     if(a[i]==1)
            one++;
    else
            zero++;   
    }
    cout<<one<<" "<<zero<<endl;
    if(one>zero)
    cout<<"YES"<<nl;
    else
    cout<<"NO"<<nl;
}

void solve1(){
        int n, one=0, zero=0;
        f(i,0,7){
            cin>>n;
            if(n==1)
            one++;
            else
            zero++;
        }
        if(one>zero)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}