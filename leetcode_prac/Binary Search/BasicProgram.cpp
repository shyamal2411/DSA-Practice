#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

int main() {
  int n;
  cin >> n;
  vi v(n);
  read(v, n);

  int to_find;
  cin >> to_find;
  int low = 0, high = n - 1;
  int mid;
  while (high - low > 1) {
    // this condition of while, will be true only when both indexes get
    // adjacent.
    mid = (high - low) / 2;
    if (v[mid] < to_find)
      low = mid + 1;
    else
      high = mid;
  }

  if (v[low] == to_find)
    cout << low << endl;
  else if (v[high] == to_find)
    cout << high << endl;
  else
    cout << "NOT FOUND";

  return 0;
}

/*
INPUT:
6
2 3 5 4 7 8
5
OUTPUT:
3
*/
