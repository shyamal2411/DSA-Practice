
#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i,a,n) for(int i=a;i<n;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define in cin>>
#define out cout<<

class Solution {
 public:
  int numJewelsInStones(string jewels, string stones) {
    int sum = 0;
    for (int i = 0; i < jewels.size(); i++) {
      sum += count(stones.begin(), stones.end(), jewels[i]);
    }

    return sum;
  }

  int numJewelsInStones2(string jewels, string stones) {
    unordered_map<int, int> mp;
    // NOTE: unordered map has search time -time complexity of O(1)
    // map has search time- O(nlogm)
    // this is why I used unordered map, we can change to map also!
    int count = 0;

    // adding all elements of stones in map
    for (char c : stones)
      mp[c]++;

    // then iterate through jewels and if you get the same element count++
    for (char c : jewels) {
      if (mp.count(c))
        count += mp[c];
    }
    return count;
  }
};


void solve(){
int n,k;
string j,s;
cin>>j>>s;
 Solution ss;
 cout<< ss.numJewelsInStones2(j,s)<<nl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}
/*INPUT:
5
aA aAAbbbb
z ZZ
abc ac
aF AaaddfFf
AYOPD ayopd
OUTPUT:
3
0
2
3
0
*/