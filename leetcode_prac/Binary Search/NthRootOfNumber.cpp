// Striver's question

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

double multi(double number, int n) {
  // just to multiply number
  double ans = 1.0;
  for (int i = 1; i <= n; i++)
    ans *= number;

  return ans;
}

double nthroot(int n, int m) {
  double low = 1;
  double high = m;
  double eps = 1e-6;  // 10^(-6)

  while ((high - low) > eps) {
    double mid = (low + high) / 2.0;
    if (multi(mid, n) < m)
      low = mid;
    else
      high = mid;
  }
  cout << low << " " << high << endl;

  cout << pow(m, (double)(1.0 / (double)n));
}

int main() {
  int n, m;
  cin >> n >> m;
  nthroot(n, m);
  return 0;
}