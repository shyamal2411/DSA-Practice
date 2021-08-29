
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
  vector<string> help(int n) {
    if (n == 1)
      return {"0", "1"};

    vector<string> ans, temp = help(n - 1);

    for (int i = 0; i < temp.size(); i++)
      ans.push_back("0" + temp[i]);

    for (int i = temp.size() - 1; i >= 0; i--)
      ans.push_back("1" + temp[i]);

    return ans;
  }

  vector<int> grayCode(int n) {
    vector<string> graystr = help(n);
    vector<int> ans;
    for (auto i : graystr)
      ans.push_back(stoi(i, 0, 2));

    return ans;
  }
};

void solve(){
int n,k;
in n;
  Solution ss;
  ss.grayCode(n);
//   cout << ss.grayCode(n)<< nl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}