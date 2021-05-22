#include <bits/stdc++.h>
using namespace std;

int countbits(int n) {
  int count = 0;
  while (n) {
    int ans = n & 1;
    // cout << ans << endl;
     count += ans;
    n >>= 1;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cout << "Ans: " <<countbits(n);

  return 0;
}
