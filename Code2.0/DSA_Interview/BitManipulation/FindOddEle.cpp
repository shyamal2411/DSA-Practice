// Given an array where every element occurs an even number of times, 
// except one element which occurs an odd number of times. 
// Find the element that occurs an odd number of times.

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
    int n; cin>>n;
    vi nums(n);
 read(nums, n);
 sort(begin(nums), end(nums));
    int ans = nums[0];
 for(int i = 1; i < n; i++){
     ans ^= nums[i];
 }
 cout<<ans<<endl;
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}