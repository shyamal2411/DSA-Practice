#include <bits/stdc++.h>
using namespace std;

int minValueToBalance(int a[], int n) {
  int sum1 = 0;
  for (int i = 0; i < n / 2; i++)
    sum1 += a[i];
  int sum2 = 0;
  for (int i = n / 2; i < n; i++)
    sum2 += a[i];

  return abs(sum1 - sum2);
}

int main() {
  int arr[] = {1, 7, 1, 1, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << minValueToBalance(arr, n) << endl;
  return 0;
}
