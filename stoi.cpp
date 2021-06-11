#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = to_string(n);
  sort(s.begin(), s.end());
  cout << s << endl;
  n = stoi(s);
  return 0;
}
