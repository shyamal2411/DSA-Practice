#include<bits/stdc++.h> 
using namespace std;

//DAY-1
// https://atcoder.jp/contests/abc213/tasks/abc213_b
#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define in cin>>
#define out cout<<
#define first fr
// #define second sc
// #define push_back pb

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 in n;
 vi a(n);
 read(a,n);
 sort(a.begin(),a.end(),greater<int>());
    flag=INT_MAX;
    for(i=0;i<n;i++){
        if(count<3){
        if(a[i]>=flag){
            flag=a[i];
            count++;
        }
    }
    cout<<i;
    }
}

void solve1(){
   int n;
	cin >> n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		v.push_back(make_pair(a,i+1));
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	
	cout << v[1].second << endl;
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve1();
  
return 0;
}