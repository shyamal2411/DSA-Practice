#include <bits/stdc++.h>
#include <algorithm>
#include <string>
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

int isPalindrome(string s) {
  for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
    while (isalnum(s[i]) == false && i < j)
      i++;

    while (isalnum(s[j]) == false && i < j)
      j--;

    if (toupper(s[i]) != toupper(s[j]))
      cout << "NO\n";
  }
  cout << "YES" << endl;
}

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
 
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
   int isPalindrome(string s);
  }
}
