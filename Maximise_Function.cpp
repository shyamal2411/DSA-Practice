#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int ans, max, min, n, k, t, i, p, q, r, s, count = 0, j;
 
  cin >> t;
  while (t--) {
    cin >> n;
    int arr[n];
    min = INT_MIN, max = INT_MAX;
    fo(i, n) {
      cin >> arr[i];
      if (arr[i] > min)
        min = arr[i]; //simply find the minimum element 

      if (arr[i] < max)
        max = arr[i]; //and max element
    }
    ans = abs(max-min); //take their difference 
    ans *= 2; //to match ans, making it  x2
    cout << ans << endl;
  }
  return 0;
}