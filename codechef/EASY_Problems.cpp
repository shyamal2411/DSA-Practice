#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e5 + 5;
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

void PROBCAT(){
 int x; cin>>x;
 if(x >= 1 && x < 100){
     cout<<"Easy\n"; return;
 }
 
 if(x >= 100 && x < 200){
     cout<<"Medium\n"; return;
 }
 if(x >= 200 && x <= 300){
     cout<<"Hard\n"; return;
 }

}

void CHFSPL(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c - min(a, min(b,c))<<endl;
    // int ans = 0;
    // if(a+b > ans)
    // ans = a+b; 
    // else if(a+c > ans)
    // ans = a+c;
    // else if(b+c > ans)
    // ans = b+c;
    // cout<<ans<<endl;
}

void SMOL(){
    int n, k; cin>>n>>k;
    if(k == 0)
    cout<<n<<endl;
    else
    cout<<n%k<<endl;
    
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) CHFSPL();
  
return 0;
}