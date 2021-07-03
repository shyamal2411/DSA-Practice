#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i, a, n) for (int i = a; i < n; i++)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i] << " ";
#define in cin >>
#define out cout <<

class Solution {
 public:
  char findTheDifference(string s, string t) {
    unordered_map<char, int> sh, th;
    // take 2 maps and insert the characters of s in sh
    char result = ' ';  // function type is char, so for returning char

    for (char ch : s)
      sh[ch]++;  // inserting all the characters of s into map-sh

    for (char ch : t) {
      th[ch]++;  // insert characters & check if the char value of th more than
                 // sh i.e. check if the char is out of s string's out of the
                 // area or not
      if (th[ch] > sh[ch]) {
        result = ch;  // if it is then assign it to result char & break
        break;
      }
    }
    return result;
  }
};
void solve() {
  int n, k;
  string s, t;
  cin >> s >> t;
  Solution ss;
  //   ss.findTheDifference(s,t);
  cout << ss.findTheDifference(s, t) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  //   in t;
  while (t--)
    solve();

  return 0;
}
/*
INPUT:
abcd abcde
OUTPUT:
e
*/