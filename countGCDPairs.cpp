// https://www.geeksforgeeks.org/count-pairs-from-an-array-having-gcd-equal-to-the-minimum-element-in-the-pair/

#include <bits/stdc++.h>
using namespace std;

// Function to count pairs from an array having GCD equal to minimum element of that pair
int CountPairs(int arr[], int N) {
  // Stores the resultant count
  int res = 0;

  // Stores the frequency of each array element
  map<int, int> mp;

  for (int i = 0; i < N; i++) 
    mp[arr[i]]++;

  // Iterate over the Map mp
  for (auto p : mp) {
    // Stores the array element
    int x = p.first;
    // Stores the count of array element x
    int y = p.second;

    if (x == 1) {
      res += N - 1;  // Increment res by N-1
      continue;
    }

    res += (y * (y - 1)) / 2;  // Increment res by yC2

    // Iterate over the range [2, sqrt(x)]
    for (int j = 2; j <= sqrt(x); j++) {
      // If x is divisble by j
      if (x % j == 0) {
        // Increment the value of res by mp[j]
        res += mp[j];

        // If j is not equal to x/j
        if (j != x / j)

          // Increment res by mp[x/j]
          res += mp[x / j];
      }
    }
  }

  return res;
}

int main() {
  int arr[] = {2, 3, 1, 2};
  int N = sizeof(arr) / sizeof(arr[0]);
  cout << CountPairs(arr, N);

  return 0;
}
