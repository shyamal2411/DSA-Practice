#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  string inputstr, outputstr;
  cin >> inputstr;

  for (i = 0; i < inputstr.size(); i++) {
    char ch = tolower(
        inputstr[i]); /*Given in question, that there should be all lower
                         cases,so converting all the uppercases beforehand.*/
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'y') {
      continue; /*continue to the rest part if there are the above characters.*/
    } else {
      cout << "." << ch; /*if the string has elements execpt aeiouy then make .
                            and print the character.*/
    }
  }
  cout << outputstr;
  return 0;
}