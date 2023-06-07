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
#define umap unordered_map<int, int> mp
#define input int n; cin>>n;
#define inmap for(auto i: mp) mp[i]++;

void solve(){
 int n, ans1 = 0, ans2 = 0; cin>>n;
 vi nums(n);
 read(nums, n);
    sort(begin(nums), end(nums));
f(i, 0, n/2){
    ans1+= nums[i];
}


f(i, n/2, n){
    ans2+= nums[i];
}

if((ans1 * ans2)%2!=0){cout<<"YES\n";}
else {cout<<"NO\n";}

//  if(n%2 == 0){cout<<"YES\n";}
//  else {cout<<"NO\n";}
}


void solve1(){
    int n, ans1 = 0, ans2 = 0, count = 0; cin>>n;
 vi nums(n);
 read(nums, n);

 f(i, 0, n){
     if(nums[i] %2) count++;
 }

 if(count == 0 || count %2)cout<<"NO\n";
 else cout<<"YES\n";

}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve1();
  
return 0;
}