#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cin.tie(0);                       \
  cout.tie(0);
#define nl "\n"
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
bool prime[MAX];
int pref[MAX], suff[MAX];

void solve(int pref[], int suff[]) {
  memset(prime, true, sizeof(prime));

  for (int i = 2; i * i < MAX; i++) {
    if (prime[i]) {
      for (int j = i * i; j < MAX; j += i)
        prime[j] = false;
    }
  }

  pref[1] = 1;
  suff[MAX - 1] = 1e9 + 7;
  for (int i = 2; i < MAX; i++) {
    if (prime[i])
      pref[i] = i;
    else
      pref[i] = pref[i - 1];
  }

  for (int i = MAX - 1; i > 1; i--) {
    if (prime[i])
      suff[i] = i;
    else
      suff[i] = suff[i + 1];
  }
}

int query(int pref[], int suff[], int l, int r) {
  if (pref[r] < l || suff[l] > r)
    return -1;
  else
    return pref[r] - suff[l];
}

int main() {
  int t;
  in t;
  while (t--) {
    int l, r;
    in l >> r;

    solve(pref, suff);

    out query(pref, suff, l, r) << nl;
  }
  return 0;
}
