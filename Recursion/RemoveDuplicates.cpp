#include <bits/stdc++.h>
using namespace std;
// program to remove duplicates from a string using recursion
string removedupli(string s) {
  if (s.length() == 0)
    return "";

  char ch = s[0];
  string ans = removedupli(s.substr(1));
  if (ch == ans[0])
    return ans;

  return (ch + ans);
}
int main() {
  string s;
  cin >> s;
  cout << removedupli(s);
  return 0;
}