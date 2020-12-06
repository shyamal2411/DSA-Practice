#include <bits/stdc++.h>
using namespace std;
//* AS A PART OF PRACTICE, THIS IS WRITTEN FROM VIDEO OF APNA COLLOGE
int divisible(int n, int a, int b) {
  int c1 = n / a;
  int c2 = n / b;
  int c3 = n / (a * b);
  return c1 + c2 - c3;
}
//! INCLUSION EXCLUSION PRINCUPLE
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  cout << divisible(n, a, b) << endl;
  return 0;
}