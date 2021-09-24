#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define int long long 
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<

void solve(){
int n,k,t,i,p,q,r,s,count=0,j,flag;
int n;
cin >> n;

int arr[n];
read(arr, n);

set<int> s, s2;
int mx = INT_MIN;
f(i, 1, n) {
  s.insert(abs(arr[i] - arr[i - 1]));
  s2.insert(arr[i] - arr[i - 1]);
  mx = max(abs(arr[i] - arr[i - 1]), mx);
}

if (s2.size() == 1) {
  cout << "0\n";
  return;
}

int m = 0;
for (auto itr : s) {
  m += itr;
}

if (m == 0) {
  cout << "0\n";
  return;
}

int temp = *s.rbegin() * 1.0 / m;
int final_m = (temp + 1) * m;
int final_c = arr[1] - arr[0];

if (final_c < 0) {
  final_c += final_m;
}

f(i, 0, n - 1) {
  if (arr[i + 1] != (arr[i] + final_c) % final_m || arr[i] >= final_m ||
      arr[i + 1] >= final_m) {
    cout << "-1\n";
    return;
  }
}
cout << final_m << " " << final_c << "\n";
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    t=1;
    in t;
    while(t--){
        solve();  
    }    
}