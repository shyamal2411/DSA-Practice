#include <bits/stdc++.h>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n) {
  struct Pair mm;
  int i;

  if (n == 1) {
    mm.max = arr[0];
    mm.min = arr[0];
    return mm;
  }

  if (arr[0] > arr[1]) {
    // just to assign variables.
    mm.max = arr[0]; 
    mm.min = arr[1];
  } 
  else {
    mm.max = arr[1];
    mm.min = arr[0];
  }

  for (i = 2; i < n; i++) {
    if (arr[i] > mm.max)
      mm.max = arr[i];

    else if (arr[i] < mm.min)
      mm.min = arr[i];
  }
  return mm;
}

int main() {
  int arr[6];
  for(int i = 0; i < 6; i++)
  {cin>>arr[i];}
  int arr_size = 6;

  struct Pair mm = getMinMax(arr, arr_size);

  cout << mm.min <<" "<<  mm.max;
  return 0;
}
