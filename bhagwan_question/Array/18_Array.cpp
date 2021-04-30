#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// #define int long long
#define nl endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

void findcomman(int ar1[], int ar2[], int ar3[], int n, int m, int o) {
  int i = 0, j = 0, k = 0;

  while (i < n && j < m && k < 0) {
    if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
      cout << ar1 << " ";
      i++;
      j++;
      k++;
    }

    else if (ar1[i] < ar2[j])
      i++;

    else if (ar2[j] < ar3[k])
      j++;

    else
      k++;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int n, m, o;
  in n >> m >> o;
  int ar1[n], ar2[m], ar3[o];

  for (int i = 0; i < n; i++)
    cin >> ar1[i];

  for (int j = 0; j < m; j++)
    cin >> ar2[j];

  for (int k = 0; k < o; k++)
    cin >> ar3[k];

  cout << "Comman elements in 3 arrays are: ";
  findcomman(ar1, ar2, ar3, n, m, o);
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) {
  // Initialize starting indexes for ar1[], ar2[] and ar3[]
  int i = 0, j = 0, k = 0;

  // Iterate through three arrays while all arrays have elements
  while (i < n1 && j < n2 && k < n3) {
    // If x = y and y = z, print any of them and move ahead
    // in all arrays
    if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
      cout << ar1[i] << " ";
      i++;
      j++;
      k++;
    }

    // x < y
    else if (ar1[i] < ar2[j])
      i++;

    // y < z
    else if (ar2[j] < ar3[k])
      j++;

    // We reach here when x > y and z < y, i.e., z is smallest
    else
      k++;
  }
}

int main() {
  int ar1[] = {1, 5, 10, 20, 40, 80};
  int ar2[] = {6, 7, 20, 80, 100};
  int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
  int n1 = sizeof(ar1) / sizeof(ar1[0]);
  int n2 = sizeof(ar2) / sizeof(ar2[0]);
  int n3 = sizeof(ar3) / sizeof(ar3[0]);

  cout << "Common Elements are ";
  findCommon(ar1, ar2, ar3, n1, n2, n3);
  return 0;
}
*/