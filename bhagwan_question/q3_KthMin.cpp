#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

//! Made mistake in arguements in function, wrote int arr in place of int arr[]
int kelement(int arr[], int n, int key) {
  sort(arr, arr + n);  //! Made a mistake here, I wrote sort(arr+n,arr);

  return arr[key - 1];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int k, t, i, p, q, r, s, count = 0, j;

  int arr[] = {1, 90, 8, 4, 5, 6};
  int n = 6, key = 3;

  cout << "Kth smallest element is: " << kelement(arr, n, key);
  return 0;
}
