#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r) {
  if (l >= r)  // > for even length of string, = for odd length of string.
    return true;

  if (s[l] != s[r]) // if characters doesn't match from either side, then simply return false.
    return false;

  return isPalindrome(s, l + 1, r - 1);// we go on comparing characters from both the sides
}

int main() {
  string s;
  cin >> s;
  int len = s.length();
  if (isPalindrome(s, 0, len - 1))
    cout << "Palindrome" << endl;

  else
    cout << "Not a palindrome" << endl;

  return 0;
}