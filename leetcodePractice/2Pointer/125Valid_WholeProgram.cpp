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

bool validpalindrome(string s) {
    
  int l = 0, r = s.size() - 1;
  while (l < r) {
    while (l < r && !isalnum(s[l]))
      l++;
    while (l < r && !isalnum(s[r]))
      r--;
    if (tolower(s[l]) != tolower(s[r]))
      return false;
    l++;
    r--;
  }
  return true;
}

int32_t main() {
  string s;
  cin >> s;
  if(validpalindrome(s))
    cout<<"Palindrome";

    else
    cout<<"Not a Palindrome";

    return 0;
  }