#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int arr[10];
  while (n--) {
    cin >> arr[i];

    if (arr[1] == '+')
      count++;
    else
      count--;
  }
  
  cout << count << endl;
  return 0;
}