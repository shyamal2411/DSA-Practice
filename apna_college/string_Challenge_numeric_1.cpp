#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  sort(s.begin(), s.end(), greater<int>());
  cout << s << endl;
}