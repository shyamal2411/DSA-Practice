#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long

void rotate(int arr[], int n) {
  int x = arr[n - 1], i; //last element is stored in x
  for (i = n - 1; i > 0; i--) //one by one all the other elements are shifted one positioon ahead.
    arr[i] = arr[i - 1];
  arr[0] = x; // the first element is stored in x.
}

int printarr(int arr, int n) {
  cout << "\nRotated Array:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  rotate(arr, n);
  printarr(arr, n);
  return 0;
}
/*
Input:
5
2 3 8 9 7
Output:
Rotated Array:
7 2 3 8 9
*/