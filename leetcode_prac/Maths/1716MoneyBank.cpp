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
  int totalMoney(int n) {
    int sum = 0;
    int j = 1;
    for (int i = 0; i < n; i++) {
      sum += (i + j);
      if ((i + 1) % 7 == 0) {  // increase 1 every monday
        j++;
        i = -1;
        n -= 7;
      }
    }
    return sum;
  }
};
void solve(){
int n,k;
in n;
 Solution ss;
 out ss.totalMoney(n)<<nl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}