#include<bits/stdc++.h> 
using namespace std;

// #define int long long 
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

//TIME: O(s)
//SPACE: O(1)

class Solution {
 public:
  bool checkValidString(string s) {
    int maxdiff = 0, mindiff = 0;
    for (char c : s) {
      maxdiff += (c == '(' || c == '*') ? 1 : -1;
      mindiff += (c == ')' || c == '*') ? -1 : 1;
      if (maxdiff < 0)
        return false;
      mindiff = max(0, mindiff);
    }
    return mindiff == 0;
  }
};

void solve(){
int n,k;
string s;  
cin>>s;
 Solution ss;
if (ss.checkValidString(s))
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
/*
et diff be count of left parenthesis minus count of right parenthesis.

When we meet:

(, we increment diff.
), we decrement diff.
/ *, we have three choices which makes the diff become a range -- [diff - 1, diff
+ 1]. So we use maxDiff/minDiff to record the maximum/minimum diff we can get.

When we meet:

(, ++maxDiff and ++minDiff.
), --maxDiff and --minDiff.
/ *, ++maxDiff and --minDiff.
If maxDiff become negative, it means it's already invalid, we should return
false.

Whenever minDiff falls below 0, we should force it to be 0 because we never
accept negative diff during the process.

After scanning through string s, as long as minDiff is 0, this string can be a
valid one.


*/