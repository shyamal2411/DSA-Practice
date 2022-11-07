#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-make-array-equal/
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

class Solution {
public:
    int minOperations(int n) {
        int mid = n/2;
        return n%2 == 0 ? (mid*mid) : mid * (mid+1);
    }
};

int32_t main(){
  Solution ss;
  cout<<ss.minOperations(3)<<endl;
return 0;
}