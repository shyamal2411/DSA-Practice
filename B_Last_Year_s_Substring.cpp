//EDITORIAL SOLUTION
#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1462/problem/B
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i <= 4; i++) {
    if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}

/*Explanation: The question asks that the solution should only contain 2020 in the result,
anything except 2020 should be removed. now in the solution, we take that substr of s,
 i.e substr(0,i) should be removed from front and substr(n-4+i,4-i)  -4+i because we don't have to remomve 2020.*/