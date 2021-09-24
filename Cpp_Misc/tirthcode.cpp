#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int mod = 1000000007;
typedef vector<int> vi;
#define pi pair<int, int>
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

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--) {
    int n, A, B;
    cin >> n >> A >> B;
    int sc1 = 0;
    int sc2 = 0;
    string str;

    for (int i = 0; i < n; i++) {
      cin >> str;
      if ((str[0] == 'E') || (str[0] == 'Q') || (str[0] == 'U') ||
          (str[0] == 'I') || (str[0] == 'N') || (str[0] == 'O') ||
          (str[0] == 'X')) {
        sc1 += A;

      } else {
        sc2 += B;
      }
    }
    if (sc1 > sc2) {
      cout << "SARTHAK" << endl;
    } else if (sc1 < sc2) {
      cout << "ANURADHA" << endl;
    } else {
      cout << "DRAW" << endl;
    }
  }

  return 0;
}