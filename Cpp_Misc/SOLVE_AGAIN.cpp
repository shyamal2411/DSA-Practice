#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

//! solve this again!
//! LINK OF THIS PROBLEM:
//! https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

int printunion(int ar1[], int ar2[], int m, int n) {
  int i = 0, j = 0;
  while (i < m && j < n) {
    if (ar1[i] < ar2[j])
      cout << ar1[i++] << " ";

    else if (ar2[j] < ar1[i])
      cout << ar2[j++] << " ";

    else {
      cout << ar2[j++] << " ";
    }
  }
  while (i < m)
    cout << ar1[i++] << " ";

  while (j < n)
    cout << ar2[j++] << " ";
}

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  int m;
  cin >> m >> n;
  int ar1[m], ar2[n];
  for (i = 0, j = 0; i < n, j < m; i++, j++)
    cin >> ar1[i];
  cin >> ar2[j];

  printunion(ar1, ar2, m, n);
  return 0;
}