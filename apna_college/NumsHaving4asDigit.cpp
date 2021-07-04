// https://
// www.geeksforgeeks.org/count-numbers-from-1-to-n-that-have-4-as-a-a-digit/

/*Given a number n, find count of all numbers from 1 to n that have 4 as a
digit. Examples :

Input:   n = 5
Output:  1
Only 4 has '4' as digit

Input:   n = 50
Output:  14

Input:   n = 328
Output:  60*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i, a, n) for (int i = a; i < n; i++)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i] << " ";
#define in cin >>
#define out cout <<

bool has4(int x);

int countNumbers4(int n) {
  int result = 0;
  for (int x = 1; x <= n; x++) {
    result += has4(x) ? 1 : 0;
  }
  return result;
}
bool has4(int x) {
  while (x != 0) {
    if (x % 10 == 4)
      return true;

    x /= 10;
  }
  return false;
}

void solve() {
  int n, k;
  in n;
  //   Solution ss;
  cout << countNumbers4(n) << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve();

  return 0;
}