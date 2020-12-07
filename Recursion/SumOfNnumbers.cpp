//! RECURSION TOPIC: SUM OF N NUMBERS
#include <bits/stdc++.h>
using namespace std;
// Simple program of giving the sum of numbers.
int sum(int n) {
  if (n == 0)  // this is base case-condition for stopping the recusion.
    return 0;

  int prevsum = sum(n - 1);
  return n + prevsum;
}

int main() {
  int n;
  cin >> n;
  cout << sum(n);
}