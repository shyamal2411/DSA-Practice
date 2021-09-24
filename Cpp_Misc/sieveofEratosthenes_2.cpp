#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
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

void solve1(int n) {
  bool arr[n];
  bool flag;

  for (int i = 0; i < n; i++)
    arr[i] = true;

  //   cout << "\n Prime Numbers from 1 to n are : " << endl;

  for (int i = 2; i < n; i++) {
    for (int j = i * i; j < n; j += i) {
      arr[j - 1] = false;
    }
  }

  for (int i = 2; i < n; i++) {
    if (arr[i - 1] == true)
      cout << i << "\t";
  }

  cout << "\n";
}

void solve(int n) {
  int arr[n] = {0};
  for (int i = 2; i < n; i++) {
    for (int j = i * i; j < n; j += i) {
      arr[j - 1] = 1;
    }
  }
  for (int i = 2; i < n; i++) {
    if (arr[i - 1] == 0)
      cout << i << "\t";
  }
  cout << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int t;
  t = 1;
  // in t;
  while (t--) {
    solve(n);
    solve1(n);
  }
}