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
  bool isIsomorphic(string s, string t) {
    char smap[128] = {0};
    char tmap[128] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++) {
      if (smap[s[i]] != tmap[t[i]])
        return false;
      smap[s[i]] = i + 1;
      tmap[t[i]] = i + 1;
    }
    return true;
  }
};
/*
If use map_s[s[i]] += 1, this case("gaga" ,"cddc") will return true, actually
it's false.
*/

void solve(){
int n,k;
string s,t;
in s;
in t;
 Solution ss;
if (ss.isIsomorphic(s,t))
  cout << "true\n";
else
  cout << "false\n";
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}