#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, i, p, q, count, j, t;
  cin >> n;
  int array[n];

  for (i = 0; i < n; i++) {
    cin >> array[i];  // taking input
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (array[j] < array[i]) {
        swap(array[i], array[j]);
      }
    }
  }

  for(int i = 0; i < n; i++)
  cout<<array[i]<<endl;
}