#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < int n; i++)

void rotate(int arr[], int n) {
  int x = arr[n - 1], i;
  for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
  arr[0] = x;
}

printarr(int arr, int n) {
  cout << "\nRotated Array:\n";
  fo(i, n) cout << arr[i] << " ";
}
int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int arr[n];
  fo(i, n) cin >> arr[i];

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