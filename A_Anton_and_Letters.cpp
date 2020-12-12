#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, t, i, p, q, r, count = 0, j;
  string s;
  set<char> l;
  getline(cin, s);  // learn this format!
  i = 0;
  while (s[i]) {
    if (isalpha(s[i]))
      l.insert(s[i]);
    i++;
  }
  cout << l.size() << endl;
  return 0;
}

//! isalpha is function which Checks if character is alphabetic,
//! it basically aggregates the alphabets from characters link

// string s;
// for (i = 0; i < s.size(); i++) {
//   if (s[i] == '{' && s[i] == '}' && s[i] == ',')
//     i++;

//   else if (s[i] >= 'a' || s[i] <= 'z')
//     count++;
// }
// cout << count << endl;

//* 2nd approach
/*
char arr[1000];
  for (i = 0; i < 1000; i++) {
      cin>>arr[i];
    if (arr[i] == '{' && arr[i] == '}' && arr[i] == ',')
      i++;

    else if (arr[i] >= 'a' && arr[i] <= 'z')
      count++;
  }
  cout << count << endl;
*/