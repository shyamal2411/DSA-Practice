/*This question is asked by Google. Given a string, return whether or not it
uses capitalization correctly. A string correctly uses capitalization if all
letters are capitalized, no letters are capitalized, or only the first letter is
capitalized.

Ex: Given the following strings...

"USA", return true
"Calvin", return true
"compUter", return false
"coding", return true
*/
#include <bits/stdc++.h>
using namespace std;

bool isLower(char c) {
  return c >= 'a' and c <= 'z';
}

bool isUpper(char c) {
  return c >= 'A' and c <= 'Z';
}

bool detectUppercaseUseUtil(string s) {
  int n = s.size();
  int i;

  if (isLower(s[0])) {
    i = 1;
    while (s[i] && isLower(s[i]))
      ++i;
    return i == n ? true : false;
  }

  else {
    i = 1;

    while (s[i] && isUpper(s[i]))
      ++i;

    if (i == n)
      return true;
    else if (i > 1)
      return false;

    while (s[i] && isLower(s[i]))
      ++i;
    return i == n ? true : false;
  }
}

void detectUppercaseUse(string s) {
  bool check = detectUppercaseUseUtil(s);

  if (check)
    cout << "Yes";
  else
    cout << "No";
}

int main() {
  string s = "shyamaL";

  detectUppercaseUse(s);

  return 0;
}
