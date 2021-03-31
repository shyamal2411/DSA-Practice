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
int n,k,t,p,q,r,count=0,j;

cin>>n;

set<int> s;
f(i, 0, n) {
  int x;
  cin >> x;
  s.insert(x);
}

int flag = 0;
int sum = 0;
for (auto itr : s) {
  if (flag == 2) {
    break;
  }
  sum += itr;
  flag++;
}
cout << sum << " ";
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

/*
VECTOR:
cin >> n;
vector<int> v(n);
for(int i=0;i<n;i++)
cin >> v[i];
sort(v.begin(),v.end());
cout << v[0]+v[1] << endl;
*/