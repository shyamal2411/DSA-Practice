#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl endl
const int M = 1e9 + 7;
typedef vector<int> vi;
#define pi pair<int, int>
#define yes cout << 'YES' << endl;
#define no cout << 'NO' << endl;
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
  int n, m, x, k, i, p, q, r, count =INT16_MIN, j, flag, ans = 0;
  in n >> m;
  int arr[n];
  read(arr, n);

  in q;
  int arq[q];
  for (j = 0; j < q; j++) {
    cin >> arq[j];
      f(i,0,n)
      {
        ans=(arr[i]+arq[j])%m;

        if(ans>count)
        count=ans; 
      }
        cout<<count<<endl;
  }

}

void solve2(){
  int n, m;
  cin >> n >> m;

  vector<int> v(n);
  read(v, n);
  set<int> s;

  f(i, 0, n) {
    v[i] %= m;
    s.insert(v[i]);
  }

  int q;
  cin >> q;

  while (q--) {
    int x;
    cin >> x;

    x %= m;
    auto itr = s.upper_bound(m - x - 1);
    if (itr == s.begin()) {
      itr = s.end();
    }
    itr--;
    cout << (x + *itr) % m << endl;
  }
}

int32_t main() {
  FIO int t;
  t = 1;
  // in t;
  while (t--)
    solve2();

  return 0;
}