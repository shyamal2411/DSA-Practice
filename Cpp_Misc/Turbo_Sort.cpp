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
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];cout<<endl;
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<endl;
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void lesstime(){
  int n, i, a[1000001] = {0};
  cin >> n;
  while (n--) {
    cin >> i;
    a[i]++;
  }
  for (i = 0; i < 1000001; i++) {
    while (a[i] > 0) {
      cout << i << "\n";
      a[i]--;
    }
  }
}

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans;
 in n;
 vector<int> v(n);
 read(v,n);
sort(v.begin(),v.end());
pr(v,n);
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--){
        // solve(); 
        lesstime(); 
    }    
}