#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// FROM:     APNA COLLEGE
int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  string s;
  cin >> s;

  // to upper case without using toupper
  for (i = 0; i < str.size(); i++) {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  }
  cout << str << endl;

  // to lower case without using tolower
  for (i = 0; i < str.size(); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
  }
  cout << str;
}