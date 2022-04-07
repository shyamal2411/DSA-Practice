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

void solve1(){
 int x,y;
 cin>>x>>y;
    if(x==y)
    cout<<"ANY\n";
    if(x<y)
    cout<<"FIRST\n";
    else if(x>y)
    cout<<"SECOND\n";
}

void solve2(){
    int total, daily, ans = 0;
    cin>>total>>daily;
    ans = 30*daily;
    if(ans <= total)
    cout<<"YES\n";
    else if(ans > total)
    cout<<"NO\n";
}

void solve3(){
    int n; cin>>n;
    if(n < 4){
    cout<<1<<endl;
    return;
    }
    cout<<ceil(n/4)<<endl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve3();
  
return 0;
}