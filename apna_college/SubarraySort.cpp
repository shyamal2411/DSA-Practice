#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define nl "\n"
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

bool outoforder(vi arr, int i) {
    int x=arr[i];
    if(i==0)
    return x>arr[1];

if(i==arr.size()-1)
return x< arr[i-1];

return x>arr[i] or x< arr[i];
}

pair<int, int> subarraysort(vi arr) {
  int small = INT16_MAX, large = INT16_MIN;

  for (int i = 0; i < arr.size(); i++) {
    int x = arr[i];
    if (outoforder(arr, i)) {
        small=min(small,x);
        large=max(large, x);
    }
  }

if(small==INT_MAX)
{
     return {-1,-1};
}
return {0,0};
  //   vi b(arr);
  //   sort(arr.begin(), arr.end());
  //   int i = 0, j = 0, n = arr.size();
  //   while (i < n && arr[i] == b[i]) {
  //     i++;  // increment i from starting the index until both elements meet.
  //   }
  //   int j = arr.size() - 1;
  //   while (j >= 0 and arr[j] == b[j]) {
  //     j--;  // j starts from end of the array until both elements are equal
  //   }
  //   if (i == arr.size()) {
  //     return {-1, -1};
  //   }

  //   return {i, j};
}

int main() {
  vi arr = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
  auto p = subarraysort(arr);
  cout << p.first << "and" << p.second << nl;
  return 0;
}