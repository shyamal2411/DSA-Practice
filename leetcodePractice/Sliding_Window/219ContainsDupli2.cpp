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
// #define second sc

class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++) {
      if (i > k)
        s.erase(nums[i - k - 1]);

      if (!s.insert(nums[i]).second)
        return true;
    }
    return false;
  }

  bool containsNearbyDuplicate2(vector<int>& nums, int k) {
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
      int val = nums[i];
      if (mp.count(val) && i - mp[val] <= k)
        return true;

      mp[val] = i;
    }
    return false;
  }

  void solve() {
    int n, k;
    cin >> n >> k;
    vi nums(n);
    read(nums, n);
    if (containsNearbyDuplicate2(nums, k))
      out "YES\n";
    else
      out "NO\n";
  }
};

int32_t main(){
int t; t=1;
cin>>t;
Solution ss;
while(t--){
ss.solve();
}

return 0;
}
/*
3
4 3
1 2 3 1
4 1
1 0 1 1
6 2
1 2 3 1 2 3
*/