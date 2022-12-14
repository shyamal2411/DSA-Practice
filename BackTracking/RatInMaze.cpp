#include <bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,
            int x,
            int y,
            int n)  // allocating dynamic memory to arr so pointer to pointer.
{
  if (x < n && y < n && arr[x][y] == 1) {
    return true;
  }
  return false;
}

bool ratinmaze(int** arr, int x, int y, int n, int** solarr) {
  if (x == n - 1 && 8 == n - 1)  // base case
  {
    solarr[x][y] = 1;
    return true;
  }
  if (isSafe(arr, x, y, n)) {
    solarr[x][y] = 1;
    if (ratinmaze(arr, x + 1, y, n, solarr))  // proceeding in right direction,
                                              // i.e. proceeding in x direction
    {
      return true;
    }
    if (ratinmaze(arr, x, y + 1, n, solarr)) {
      return true;
    }
    /*If we are not getting solution by either going in any of these directions
     * then we go Back Track*/
    solarr[x][y] = 0;  // we've made our path to initial position, this iteself
                       // is called backtracking.
    return false;
  }
  return false;
}
int main() {
  int n;
  cin >> n;
  int** arr = new int*[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int** solarr = new int*[n];
  for (int i = 0; i < n; i++) {
    solarr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      solarr[i][j] = 0;
    }
  }
  if (ratinmaze(arr, 0, 0, n, solarr)) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << solarr[i][j] << " ";
      }
      cout << endl;
    }
  }
}

/*
Input:
5
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1

Output:
1 0 0 0 0
1 1 1 1 0
0 0 0 1 0
0 0 0 1 1
0 0 0 0 1
*/
