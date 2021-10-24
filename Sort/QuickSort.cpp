//! NOTE: THIS IS THE EXACT PROGRAM OF PREVIOUS C PROGRAM.
//! THE ONLY CHANGES HERE WILL BE COUT AND CIN(AND OFCOURSE HEADER FILE ^_^)
#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void printArray(int arr[], int size) {
  int i;
  for (int i = 0; i < size; i++)
    cout << arr[i]<<" ";
  cout << "\n";
}

int main() {
  // int arr[]={21,22,9,3,11,17,7,20,38,30,37,24,71,4,33,72,69,42,63,66,68,47,44,48,52,41,55,53,56};
  // int arr[]={39,37,33,53,41,35,62,24,30,66,47,69,72,4,71,55,70,22,9,11,17,21,38,56,74,75,52,3,48,7,20};
  int arr[]={1,2,5,6,8,10,12,14,15,16,23,25,26,27,28,29,31,32,34,36,43,44,45,46,49,50,51,55,57,58,59,60,61,64,67,69,73};
  int n;
  n = sizeof(arr) / sizeof(arr[0]);
 
  quickSort(arr, 0, n - 1);
  printf("Sorted array: \n");
  printArray(arr, n);
  return 0;
}
