#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos) {
  if (n == cap)
    return n;

  int idx = pos - 1;
  for (int i = n - 1; i >= idx; i--)
    arr[i + 1] = arr[i];

  arr[idx] = x;
  return n + 1;
}
int main() {
  int arr[]={1,2,3}, cap = 5, n = 3;
  int x = 7, pos = 2;
  cout << "Before:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  n = insert(arr, n, x, cap, pos);
  cout << "After:" << endl;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
