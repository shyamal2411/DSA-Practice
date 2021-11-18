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

bool compare(string &s1, string &s2)
{
    return count(begin(s1), end(s1), '1') < count(begin(s2), end(s2), '1');
}

long long getInvs(string &s){
    long long invs = 0;
    int ones = 0;
    for(char c : s){
        if(c == '1') ones++;
        else invs += ones;
    }
    return invs;
}

void solve(){
int n,m,k,i,p,q,r,count=0,j,flag,ans=0;
 cin>>n>>m;
 vector<string> a(n);
 for(string &s : a) cin>>s;
 sort(begin(a), end(a), compare);
 string newstr;
 for(string &s : a) newstr+=s;
 cout<<getInvs(newstr)<<nl;
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}