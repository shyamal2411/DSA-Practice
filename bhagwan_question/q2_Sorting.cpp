/*  Q.2 Find a Fixed Point (Value equal to index) in a given array | Duplicates
 Allowed.*/
#include <bits/stdc++.h>
using namespace std;

int magicIndex(int arr[], int start, int end) {
  // If No Index return -1, stated in the statement itself.
  if (start > end)
    return -1;

  int midIndex = (start + end) / 2;
  // simply the middle of the array. (Middle index)
  int midValue = arr[midIndex];  // the value of element at the middle index.

  if (midIndex == midValue)
    return midIndex;  // Jo middle index ane value bnne same hoy, then simply
                      // return it.

  // Searching on Left side
  int left = magicIndex(arr, start, min(midValue, midIndex - 1)); //the third arguement here is basically going on left side of the 
    //array and recursing the algo again, this is binary search algo.

  // If Found on left, return.
  if (left >= 0)
    return left;

  // Return ans from right side.
  return magicIndex(arr, max(midValue, midIndex + 1), end); //same applies for right part of array.
}

int main() {
  int arr[] = {-10, -5, 2, 2, 2, 3, 4, 7, 9, 12, 13};
  int n = sizeof(arr) / sizeof(arr[0]);
  int index = magicIndex(arr, 0, n - 1);
  if (index == -1)
    cout << "No Magic Index";
  else
    cout << "Magic Index is : " << index;
  return 0;
}