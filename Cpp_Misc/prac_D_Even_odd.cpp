#include <bits/stdc++.h>
using namespace std;
//editorial solution practice.
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int& s : v)
    cin >> s;

  sort(v.rbegin(), v.rend());
  ll ans = 0;
  fo(i, n) {
    if (i % 2 == 0) {
      if (v[i] % 2 == 0) {
        ans += v[i];
      }
    }else
    {
        if(v[i]%2==1)
        {
            ans-=v[i];
        }
    }
    
  }
  if (ans == 0)
    cout << "Tie" << endl;
  else if (ans > 0)
    cout << "Alice" << endl;
  else
    cout << "Bob\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}