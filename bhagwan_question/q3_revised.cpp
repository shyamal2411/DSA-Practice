#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

// Sort an array of 0s, 1s and 2s
void sort012(int arr[], int n) {
  int le = 0;
  int ri = n - 1;
  int mid = 0;
  while (mid <= ri) {
    switch (arr[mid]) {
      case 0:
        mid++;
        break;

      case 1:
        mid++;
        break;

      case 2:
        swap(arr[mid], arr[ri--]);
        break;
    }
  }
}

void printarr(int arr[], int n) {
  fo(i, n) cout << arr[i] << " ";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int k, t, i, p, q, r, s, count = 0, j;
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  sort012(arr, n);
  cout << "Sorted array: " << endl;
  printarr(arr, n);
  return 0;
}