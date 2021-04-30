#include <bits/stdc++.h>
using namespace std;

void printDuplicates(int arr[], int n) {
  unordered_set<int> intSet;
  unordered_set<int> duplicate;

  for (int i = 0; i < n; i++) {
    // if element is not there then insert that
    if (intSet.find(arr[i]) == intSet.end())
      intSet.insert(arr[i]);

    // if element is already there then insert into duplicate set
    else
      duplicate.insert(arr[i]);
  }

  cout << "Duplicate item are : ";
  unordered_set<int>::iterator itr;

  // iterator itr loops from begin() till end()
  for (itr = duplicate.begin(); itr != duplicate.end(); itr++)
    cout << *itr << " ";
}

int main() {
  int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
  int n = sizeof(arr) / sizeof(int);

  printDuplicates(arr, n);
  return 0;
}