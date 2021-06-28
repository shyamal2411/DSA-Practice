/*
This question is asked by Microsoft. Given an array of strings, return the
longest common prefix that is shared amongst all strings. Note: you may assume
all strings only contain lowercase alphabetical characters.

Ex: Given the following arrays...

["colorado", "color", "cold"], return "col"
["a", "b", "c"], return ""
["spot", "spotty", "spotted"], return "spot"
*/
#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if (n == 0)
      return "";

    string ans = "";
    sort(strs.begin(), strs.end());
    string a = strs[0];
    string b = strs[n - 1];

    for (int i = 0; i < a.size(); i++) {
      if (a[i] == b[i])
        ans += a[i];
      else
        break;
    }
    return ans;
  }
};

int32_t main(){
   
  vector<string> strs;
  
return 0;
}



//Input
/*["flower","flow","flight"]
["dog","racecar","car"]
["spot", "spotty", "spotted"]
["a", "b", "c"]
["colorado", "color", "cold"]*/