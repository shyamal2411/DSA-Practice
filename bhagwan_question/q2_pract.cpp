#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

struct Pair {
  int min, max;
};

struct Pair minmax(int arr[], int n) {
  struct Pair mm;
  int i;
  if (n == 1) {
    mm.max = arr[0];
    mm.min = arr[0];
    //! Forgot to write return mm;
    return mm;
  }
  if (arr[0] > arr[1]) {
    mm.min = arr[0];
    mm.max = arr[1];
  } else {
    mm.max = arr[0];
    mm.min = arr[1];
  }
  for (i = 2; i < n; i++) {
    // because we've already covered cases for index 0 & 1.
    if (arr[i] > mm.max)
      mm.max = arr[i];
    // means that if the index i is greater than the max value of
    // mm.max then store the value of ith ele in max.
    else if (arr[i] < mm.min)
      mm.min = arr[i];  // same case for min value.
  }
  return mm;  //! Forgot to again write mm.
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int k, t, i, p, q, r, s, count = 0, j;
  int arr[] = {1, 11, 45, 471, 30, 0};
  int n = 6;
  struct Pair mm = minmax(arr, n);
  cout << "Min element is: " << mm.min << "\n";
  cout << "Max element is: " << mm.max << "\n";
  return 0;
}