#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
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
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

void solve() {
  int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
  string s;
  cin >> s;
  n = s.size();

  f(i, 0, n) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      cout << "Error" << nl;
      return;
    }
  }

  if (s[0] == '<' && s[1] == '/' && s[n - 1] == '>') {
    f(i, 2, n - 2) {
      if (!isalnum(i)) {
        out "Error" << nl;
        return;
      }
    }
    cout << "Success" << nl;
  }
}
void solve2() {
  string s;
  cin >> s;
  int n = s.size();
  if (n < 4) {
  }
  int flag = 0;
  if (s[0] == '<' && s[1] == '/' && s[n - 1] == '>') {
    f(i, 2, n - 2) {
      if (isalnum(s[i])) {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] == '0' && s[i] == '9'))) {
          flag = 1;
        }
      }
      //   else {
      //     cout << "Error\n";
      //     return;
      //   } 
    if (flag == 1) {
      cout << "Success\n";
      return;
    }
    }
   
  }
  else {
    cout << "Error\n";
  }
}

void solve3() {
  string s;
  cin >> s;
  int n = s.size();
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve2();

  return 0;
}