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
// #define first fr
// #define second sc

void MINHEIGHT(){
 int x,h;
 cin >> x >> h;
 if(x>=h)  cout<<"YES\n";
 else cout<<"NO\n";
}

void MANGOES(){
    int x,y,z;
    cin>>x>>y>>z;
    int ans = 0;
    ans = floor((z - y) / x);
    cout<<ans<<endl;
}

void LAPTOPREC(){
    int n; cin>>n; int ans = 1, count = 0;
    vi vec(n); read(vec,n);
    unordered_map<int, int> mp;
    for(auto i:vec)
    mp[i]++;

    for(auto i: mp){
        if(i.second >= count)
        count = i.second, ans = i.first;
    }
    int confused = 0;
    for(auto i: mp)
    if(i.second == count)
    confused++;

    if(confused > 1)
    cout<<"CONFUSED\n";
    else
    cout<<ans<<endl;

}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) LAPTOPREC();
  
return 0;
}