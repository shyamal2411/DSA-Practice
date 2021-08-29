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
  int countDigitOne(int n) {
    if (n < 1)
      return 0;
    if (n >= 1 and n < 10)
      return 1;

    int y = 1, x = n;

    while (!(x < 10)) {
      x /= 10;
      y *= 10;
    }
    if (x == 1)
      return n - y + 1 + countDigitOne(y - 1) + countDigitOne(n % y);
    else
      return y + x * countDigitOne(y - 1) + countDigitOne(n % y);
  }
};

void solve(){
int n,k;
in n;
  Solution ss;
  cout<<ss.countDigitOne(n) <<nl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}