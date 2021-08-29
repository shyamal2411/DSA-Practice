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

class Solution {
 public:
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
};

void solve() {
  int n, k;
  string s;
  cin >> s;
  Solution ss;
  ss.judgeCircle(s);
  if (ss.judgeCircle(s))
    cout << "YES\n";

  else
    cout << "NO\n";
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}
/*INPUT:
4
UD
LL
RRDD
LDRRLRUULR
OUTPUT:
YES
NO
NO
NO
*/