#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
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

void solve() {
  int n, grade, k, i, p, q, r, count = 0, j, flag, ans = 0;
  float hard, carbon, tens;
  in hard >> carbon >> tens;
  if (hard > 50 && carbon < 0.7 && tens > 5600) 
    grade = 10;
  
  else if (hard > 50 && carbon < 0.7) 
    grade = 9;
  
  else if (carbon < 0.7 && tens > 5600) 
    grade = 8;
  
  else if (hard > 50 && tens > 5600) 
    grade = 7;
  
  else if (hard > 50 || carbon < 0.7 || tens > 5600) 
    grade = 6;
  
  else 
    grade = 5;
  
  out grade << nl;
}

int32_t main() {
  FIO int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}