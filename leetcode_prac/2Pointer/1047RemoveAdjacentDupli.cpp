/*This question is asked by Facebook. Given a string and the ability to delete
at most one character, return whether or not it can form a palindrome. Note: a
palindrome is a sequence of characters that reads the same forwards and
backwards.

Ex: Given the following strings...

"abcba", return true
"foobof", return true (remove the first 'o', the second 'o', or 'b')
"abccab", return false
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

class Solution {
 public:
  string removeDuplicates(string s) {
    for (auto i = 1; i < s.size(); i++)
      if (s[i] == s[i - 1])
        return removeDuplicates(s.substr(0, i - 1) + s.substr(i + 1));
    return s;
  }
};

void solve() {
  string s;
  cin >> s;
  Solution ob;
  cout << ob.removeDuplicates(s) << nl;
}

int32_t main() {
  int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}
/*INPUT:
2
abbaca
azxxzy
OUTPUT:
ca
ay*/