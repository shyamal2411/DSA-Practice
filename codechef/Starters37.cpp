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

void MINHEIGHT(){
 int x,h; cin>>x>>h;
 if(x< h)
 cout<<"NO\n";
 else if(x>=h)
 cout<<"YES\n";
}

void MANGOES(){
    int x,y,z;
    cin>>x>>y>>z;
    // int ans = z- ()
    cout<< floor((z-y)/x)<<endl; 
}

void LAPTOPREC(){
    int n; cin>>n;
    vi v(n); 
    read(v,n);
    unordered_map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    int count = 0, ans = 1;
    for(auto i:mp){
        if(i.second >= count)
        count = i.second, ans = i.first;
    }
    int confuse = 0;
    
    for(auto i:mp)
        if(i.second == count)
        confuse++;
        if(confuse > 1)
        cout<<"CONFUSED\n";
        else
        cout<<ans<<"\n";
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) LAPTOPREC();
  
return 0;
}