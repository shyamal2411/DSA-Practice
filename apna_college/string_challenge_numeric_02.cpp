#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
// FROM: APNA COLLEGE
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
//! PROGRAM TO PRINT THE FREQUENCY OF CHARACTERS IN THE STRING ALONGWITH THAT
//! CHARACTER
int main() {
  string s;
  cin >> s;
  int fre[26];
  for (int i = 0; i < 26; i++)
    fre[i] = 0;

  for (int i = 0; i < s.size(); i++) {
    fre[s[i] - 'a']++;
  }

  char ans = 'a';
  int maxF = 0;

  for (int i = 0; i < 26; i++) {
    if (fre[i] >= maxF) {
      maxF = fre[i];
      ans = i + 'a';
    }
  }
  cout << maxF << " " << ans << endl;
  return 0;
}