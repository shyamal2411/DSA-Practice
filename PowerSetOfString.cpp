// program to generate power set, reference-gfg

#include <bits/stdc++.h>
using namespace std;

// curr stores current subset
// index in current subset, curr
void powerSet(string str, int index = -1, string curr = "") {
  int n = str.length();

  if (index == n)
    return; //base case

  cout << curr << "\n";  // First print current subset

  // Try appending remaining characters to current subset
  for (int i = index + 1; i < n; i++) {
    curr += str[i];
    powerSet(str, i, curr);

    // Once all subsets beginning with initial "curr" are printed, remove last character to consider a different
    // prefix of subsets.
    curr.erase(curr.size() - 1);
  }
  return;
}

int main() {
  string str;
  cin>>str;

  powerSet(str);
  return 0;
}
