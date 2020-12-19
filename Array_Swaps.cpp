#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j, m;

  cin >> n >> m;
  ll int a[n], b[m];

  fo(i, n)
   cin >> a[i]; 
  
  fo(i, m)  
  cin >> b[i];

  sort(a, a + n);
  sort(b, b + m);

  fo(j, m) {
    if (b[j] < a[0]) {
      count += n;
    }
  }
  cout << count << endl;
}