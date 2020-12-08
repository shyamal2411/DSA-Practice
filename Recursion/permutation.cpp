#include <bits/stdc++.h>
using namespace std;

void permutation(string s, string ans) {
  if (s.length() == 0) {
    cout << ans << endl;
    return;
  }
  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    string ros =
        s.substr(0, i) +
        s.substr(
            i +
            1);  // it means 0 is the starting point and i is the length.
                 // also i+1 denotes the starting point in the same operation.
    permutation(ros,ans + ch);
  }
}
int main() {

permutation("ABC","");

    return 0;
}