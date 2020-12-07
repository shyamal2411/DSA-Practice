#include <bits/stdc++.h>
using namespace std;

void reverse(string s) {
  if (s.length() == 0)
    return;

  string ros = s.substr(1);  // copying the substring after 1
  reverse(ros);              // recurring the function.
  cout << s[0];              // start printing from 0th index.
}

int main() {
  reverse("binod");
  return 0;
}