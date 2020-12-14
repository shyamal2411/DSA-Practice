#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// https://codeforces.com/problemset/problem/467/A
// revised:06-12-2020
int main() {
  int n, p, q, space = 0;
  cin >> n;
  while (n--) {
    // cin >> p >> q;
    // if (p < q)
    // 	space++;  //wrong solution for cases like1 2
    // 2 3
    // 3 4 because ama 1 person accomodate thai ske, question ma 2 persons ne
    // accomodate thava nu kahyu che
    cin >> p >> q;
    if (q - p >= 2)  // this serves both the purposes, both can accomodate in
                     // this condition!
      space++;
  }
  cout << space;
}