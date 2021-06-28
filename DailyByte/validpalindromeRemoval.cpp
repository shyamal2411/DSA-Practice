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
  bool validPalindrome(string s) {
    // same for loop as we use in every 2 pointer
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
      if (s[i] != s[j]) {
        int i1 = i, j1 = j - 1, i2 = i + 1, j2 = j;

        while (i1 < j1 && s[i1] == s[j1]) {
          i1++;
          j1--;
        }
        while (i2 < j2 && s[i2] == s[j2]) {
          i2++;
          j2--;
        }
        return i1 >= j1 || i2 >= j2;
      }
    return true;
  }
};

void solve(){
  string s;
  cin >> s;
  Solution ob;
  if (ob.validPalindrome(s)) {
    cout << "YES\n";
  } else
    cout << "NO\n";
}

int32_t main(){
  int t;
  t = 1;
  in t;
  while (t--)
    solve();
    
  return 0;
}