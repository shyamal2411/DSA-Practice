#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
// simple program written to count number of digits in a number
// wrote this to actually count zeros in a test case of
// https://codeforces.com/problemset/problem/110/A
// bored to count zeros in 3rd test case 1000000000000000000

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> n;
  while (n != 0) {
    n = n / 10;
    count++;
  }
  cout << count;
  return 0;
}