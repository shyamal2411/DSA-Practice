#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
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

void printactivity(int s[], int f[], int n) {
  int i, j;
  cout << "Following activities selected:\t" << nl;
  i = 0;
  cout << " " << i;
  for (j = 1; j < n; j++) {
    if (s[j] >= f[i]) {
      cout << " " << j;
      i = j;
    }
  }
}

int32_t main() {
  int n;
  cin>>n;
  int s[n], f[n];
  read(s, n);
  read(f, n);
  printactivity(s, f, n);

  return 0;
}