#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)

void primesieve(int n) {
  int prime[100] = {0};

  for (int i = 2; i <= n; i++) { //starting from 2 because 2 is first prime number.
    if (prime[i] == 0) {
      for (int j = i * i; j <= n; j += i) {
        prime[j] = 1;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (prime[i] == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}
int main() {
  int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  primesieve(n);
  return 0;
}