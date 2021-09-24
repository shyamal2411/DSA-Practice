#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
// PROBLEM LINK:
// https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
// copilation error,don't know to resolve
int unionfunc(int arn, int arm, int m, int n) {
  int i = 0, j = 0;
  while (i < m && j < n) {
    if (arn[i] < arm[j])
      cout << arn[i++] << " ";
    else if (arm[j] < arn[i])
      cout << arm[j++] << " ";
    else {
      cout << arm[j++] << " ";
      i++;
    }
  }
  while (i < m)
    cout << arn[i++] << " ";
  while (j < n)
    cout << arm[j++] << " ";
}

int main() {
  int k, t, i, p, q, r, s, count = 0, j;
  int n, m;
  cin >> n >> m;
  int arn[n], arm[m];
  fo(i, n) cin >> arn[n];

  for (i = 0; i < m; i++) {
    cin >> arm[i];
  }

  unionfunc(arn, arm, m, n);
  return 0;
}