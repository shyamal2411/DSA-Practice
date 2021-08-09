#include <bits/stdc++.h>
using namespace std;

//DAY-1
// https://codeforces.com/problemset/problem/412/C
#define nl "\n"
const int M = 1e9 + 7;
const int MAXN = 1e5;
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
#define first fr
#define second sc
string s[MAXN];

void solve() {
  int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
  string s[100005];
  cin >> n;
  read(s, n);

  for (j = 0; j < s[0].size(); j++) {
    count = 0;
    char out = 'z';
    for (char c = 'a'; c <= 'z'; c++) {
      for (i = 0; i < n; i++) {
        if (s[i][j] == c) {
          count++;
          out = c;
          break;
        }
      }
    }
    if (count <= 1)
      cout << out;
    else
      cout << "?";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  read(s, n);
  for (int j = 0; j < s[0].size(); j++) {
    int count = 0;
    char out = 'z';
    for (char c = 'a'; c <= 'z'; c++) {
      for (int i = 0; i < n; i++) {
        
        if (s[i][j] == c) {
          count++;
          out = c;
          break;
        }
      }
    }
    if (count <= 1)
      cout << out;
    else
      cout << "?";
  }
  cout << endl;
  return 0;
}