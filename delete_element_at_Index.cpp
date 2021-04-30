#include <bits/stdc++.h>
using namespace std;

int deletefunc(int arr[], int n, int x) {
  int i = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] == x)
      break;
  }
  if (i == n)
    return n;

  for (int j = i; j < n - 1; j++)
    arr[j] = arr[j + 1];

  return n - 1;
}
int main() {
  int arr[] = {1, 2, 3}, n = 2;
  int x = 0;
  cout << "Before:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  n = deletefunc(arr, n, x);
  cout << "After:" << endl;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
