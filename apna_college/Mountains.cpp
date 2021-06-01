// Problem statement similar to
// https://leetcode.com/problems/valid-mountain-array/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

int highest_mountain(vi arr) {
  int n = arr.size();
  int maxelement = 0;

  for (int i = 1; i <= n - 2;) {
    if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
      int count = 1;
      int j = i;

      while (j >= 1 and arr[j] > arr[j - 1]) {
        j--;
        count++;
      }
      while(i<=n-2 and arr[i]> arr[i+1])
      {
          i++; count++;
      }
      maxelement = max(maxelement, count);
    } else {
      i++;
    }
  }
  return maxelement;
}

int main() {
  vi arr{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

  cout << highest_mountain(arr) << "\n";
  return 0;
}