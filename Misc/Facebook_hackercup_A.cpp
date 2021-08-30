//------SHYAMAL------
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);

void solve() {
  string s;
  cin >> s;

  map<char, int> consonent, vowel;
  int cCount = 0, vCount = 0, ans1, ans2;

  for (auto i : s) {
    if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
      vowel[i]++;
      vCount++;
    } else {
      consonent[i]++;
      cCount++;
    }
  }

  int max1 = 0, max2 = 0;
  for (auto i : consonent) {
    max2 = max(max2, i.second);
  }

  for (auto i : vowel) {
    max1 = max(max1, i.second);
  }

  ans1 = cCount + 2 * (vCount - max1);
  ans2 = vCount + 2 * (cCount - max2);

  cout << min(ans1, ans2) << endl;
}

int32_t main() {
  FIO;
  int test;
  cin >> test;
  f(i, 1, test + 1) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}