/*
This question is asked by Amazon. Given a string representing the sequence of
moves a robot vacuum makes, return whether or not it will return to its original
position. The string will only contain L, R, U, and D characters, representing
left, right, up, and down respectively.

Ex: Given the following strings...

"LR", return true
"URURD", return false
"RUULLDRD", return true
*/
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

bool judgeCircle(string moves) {
  int l = moves.size();
  int up = 0, down = 0, left = 0, right = 0;

  for (int i = 0; i < l; i++) {
    if (moves[i] == 'U')
      up++;
    if (moves[i] == 'D')
      down++;
    if (moves[i] == 'R')
      right++;
    if (moves[i] == 'L')
      left++;
  }
  if ((up - down) == 0 && (right - left) == 0)
    return true;
  else
    return false;
}

void solve() {
  string s;
  cin >> s;
  judgeCircle(s);

  if (judgeCircle(s))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int32_t main() {
  int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}