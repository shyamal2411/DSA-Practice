#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

int lower_bound(vi& v, int element) {
  int low = 0, high = v.size() - 1;
  int mid;
  while (high - low > 1) {
    int mid = (high + low) / 2;

    if (v[mid] < element) {
      low = high + 1;
    } else {
      high = mid;  // checking left part.
    }
  }
  if (v[low] >= element) {
    return low;
  }
  if (v[high] >= element) {
    return high;
  }

  return -1;
}

int upper_bound(vi& v, int element) {
  int low = 0, high = v.size() - 1;
  int mid;
  while (high - low > 1) {
    int mid = (high + low) / 2;

    if (v[mid] <= element) {
      low = mid + 1;
    } else {
      high = mid;  // checking left part.
    }
  }
  if (v[low] > element) {
    return low;
  }
  if (v[high] > element) {
    return high;
  }

  return -1;
}

int main() {
  int n;
  cin >> n;
  vi v(n);
  read(v, n);

  int element;
  cin >> element;
  int lb = lower_bound(v, element);
  cout << lb << " " << (lb != -1 ? v[lb] : -1) << endl;

  int ub = upper_bound(v, element);
  cout << ub << " " << (ub != -1 ? v[ub] : -1) << endl;

  //   cout << lower_bound(v, element) << endl;
  //   cout << upper_bound(v, element) << endl;
  return 0;
}