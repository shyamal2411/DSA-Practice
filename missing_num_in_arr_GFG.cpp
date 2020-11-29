/*#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int arr[n];
  fo(i, n) cin >> arr[n];
  int sum = (n + 2) * (n + 1) / 2;
  for (i = 0; i < n; i++){
    sum -= arr[i];}

  cout << sum;
  return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n) {
  int total = (n + 1) * (n + 2) / 2;
  for (int i = 0; i < n; i++)
    total -= a[i];
  return total;
}

// Driver Code
int main() {
  int arr[] = {1, 2, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int miss = getMissingNo(arr, n);
  cout << miss;
}
