// find the only missing number in low sorted array of
// distinct elements within limited range.
// lINK :
// https://www.geeksforgeeks.org/find-the-missing-number-in-low-sorted-array/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

int b_search(vi& nums) {
  int n = nums.size();
  int low = 0, high = n - 1;
  int mid;

  while ((high - low) > 1) {
    mid = (low + high) / 2;

    if ((nums[low] - low) != (nums[mid] - mid))
      high = mid;
    else if ((nums[high] - high) != (nums[mid] - mid))
      low = mid;
  }
  return (nums[low] + 1);
}

int main() {
  //   int nums[] = {1, 2, 3, 4, 5, 6, 8};
  int n;
  cin >> n;
  vector<int> v(n);
  read(v, n);

  cout << "Missing number: " << b_search(v);
}

// Time Complexity: O(log n)
/*INPUT:
8
1 2 3 4 5 6 8
OUTPUT:
Missing number: 7
*/
