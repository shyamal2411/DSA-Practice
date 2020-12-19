#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i, t, count = 0, j;

  int arr[1000];
  cin >> n;
  fo(i, n) {
    if (i % 3 == 0 || i % 5 == 0)
      count += i;
  }
  cout << count << endl;
  return 0;
}

//Solved 
//19/12/2020