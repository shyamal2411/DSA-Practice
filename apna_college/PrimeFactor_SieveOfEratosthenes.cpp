#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
//! THIS PROGRAM ISN'T WORKING
//! RESOURCE:
//! https://drive.google.com/file/d/1SZlkky8YiEG-9HmH_YA_V5rowkZEb7BE/view
//! https://www.youtube.com/watch?v=nDPo9hsDNvU&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=36
void primefactor(int n) {
  int spf[n + 1] = {0};
  for (int i = 2; i <= n; i++) {
    spf[i] = i;
  }
  for (int i = 2; i <= n; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        if (spf[j] == j) {
          spf[j] = i;
        }
      }
    }
  }
  while (n != 1) {
    cout << spf[n] << " ";
    n = n / spf[n];
  }
}
int main() {
  int i, n;
  cin >> n;
  void primefactor(int n);
  return 0;
}