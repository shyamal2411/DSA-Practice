#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/START32D?order=desc&sortBy=successful_submissions
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
    int n,m;
    cin>>n>>m;
    cout<<abs(n-m)<<endl;
}

void solve2(){
    int n, m, k;
    cin>>n>>m>>k;
    int ans = (m-k);
    if(ans >= n)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}

void solve3(){
    int n,m;
    cin>>n>>m;
    if(n <= m)
    cout<<n<<endl;
    else
    {
        int ans = (n*2) - m;
        cout<<ans<<endl;
    }
}

void solve4(){
    int one = 0, n, x, y;
    cin>>n>>x>>y;
    vi s(n); read(s, n);
    f(i, 0, n){
        if(s[i] == 1)
            one++;
    }
    if(one == 0){
    cout<<"0\n";
    return;
    }

    if(x>y){
    sort(s.rbegin(), s.rend());
    cout<<y<<endl;
    return; 
    }
    else{
    sort(s.begin(), s.end());
    cout<<x<<endl;
    return;
    }
}

void solve5(){
    int n,x,y;
    cin>>n>>x>>y;
    string s; cin>>s;
    int one = 0, zero = 0;
    f(i, 0, n){
        if(s[i] == '1')
            one++;
        else
            zero++;
    }
    if(x>y){
        sort(s.begin(), s.end(), greater<int>());
        if(one > 0 && zero > 0)
        cout<<y<<endl;
        else
        cout<<0<<endl;
    }
    else{
        sort(s.begin(), s.end());
        if(one > 0 && zero > 0)
        cout<<x<<endl;
        else
        cout<<0<<endl;
    }
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve5();
  
return 0;
}