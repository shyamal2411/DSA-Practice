#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<
#define fr first
#define sc second
#define VC vector<int>
#define VP vector<pair<int, int>>
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> vec(n);
  read(vec, n);

  k--;

  int temp = vec[n / 2];//median

  int temp1 = k / 2; //even, biggest median, half hills
  int temp2 = k - temp1;//odd

  int a = temp - temp1;//left sdie from middle
  int b = temp + temp2;//right side from middle

  int ans1 = 0;
  f(i, 0, n) { ans1 += max(abs(vec[i] - a), abs(vec[i] - b)); }

  a = temp - temp2;
  b = temp + temp1;
  int ans2 = 0;

  f(i, 0, n) { ans2 += max(abs(vec[i] - a), abs(vec[i] - b)); }

  cout << min(ans1, ans2) << "\n";
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
    solve();
  }
}