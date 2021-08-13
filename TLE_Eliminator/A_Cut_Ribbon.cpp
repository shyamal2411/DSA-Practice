#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/problemset/problem/189/A
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


const int N=4001;
vector<int> dp(N);

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int ans1=0, ans2=0;
 ans1=min(a,b);
 ans2=min(c,d);
 ans=min(ans1, ans2);
 cout<<ans<<nl;
}


void solve1(){
    
    int i,j,n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0; 
    for(i=0;i<4000;i++){
        for(j=0;j<4000;j++){
            int zc=n-(i*a + j*b);
        if(zc<0)
        break;

        double z=(zc/(double)c);
        if(z==(int)z);
        ans=max(ans,(int)z+j+i);
        }
    }
    cout<<ans<<nl;
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve1();
return 0;
}