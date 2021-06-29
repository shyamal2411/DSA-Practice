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
  bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 and x != 0))
      return false;
    // Reverse half of the number
    int dummy = 0;
    while (x > dummy) {
      dummy = dummy * 10 + x % 10;
      x /= 10;
    }
    return x == dummy || x == dummy / 10;
  }
};

void solve(){
int s,n,k;
in s;
 Solution ss;
 ss.isPalindrome(s);
    if(ss.isPalindrome(s))
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}
/*INPUT:
4
121
-121
10
-101
OUTPUT:
YES
NO
NO
NO
*/