#include <iostream>
using namespace std;

// Pair struct is used to return two values from getMinMax().
struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n) {
  struct Pair mm;
  int i;
  // If there is only one element then return it as min and max both.
  if (n == 1) {
    mm.max = arr[0];//initially both are at index 0
    mm.min = arr[0];
    return mm;
  }
  // If there are more than one elements, then initialize min and max.
  if (arr[0] > arr[1]) {
    mm.max = arr[0];
    mm.min = arr[1];
  } else {
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
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int arr_size = 6;

  struct Pair mm = getMinMax(arr, arr_size);

  cout << "Minimum element is " << mm.min << endl;
  cout << "Maximum element is " << mm.max;

  return 0;
}
