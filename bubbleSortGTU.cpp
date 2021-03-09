#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, n, j, t;
  cin >> n;
  int array[n];
  for (i = 0; i < n; i++) {
    cin >> array[i];
  }
  for(i=0;i<n;i++) {
      for(j=i;j<n;j++) {
          swap(array[i], array[j]);
      }
  }
  for(i=0;i<n;i++) {
      cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}