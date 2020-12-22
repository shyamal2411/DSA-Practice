#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int solve(int n) {
  ll int count = 0, countchar = 0, i;
  string str;
  while (n--) {
    cin >> str;
    for (i = str.size(); i >= 0; i--) {
      if (str[i] != ')') {
        break;
      } 
      else {
        count++;
      }
    }
      if (count > n - count)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, countchar = 0, count = 0, j;
  cin >> t;
  while (t--) {
    cin >> n;
    solve(n);
    // while (n--) {
    //   cin >> str;
    //   for (i = str.length(); i > 0; i--) {
    //     if (str[i] == ')')
    //       count++;

    //     if (str[i] == 'a' || str[i] == 'z' || str[i] == 48 || str[i] == 57)
    //       countchar++;
    //   }
    //   if (count > countchar)
    //     cout << "Yes" << endl;
    //   else
    //     cout << "No" << endl;
    // }
  }
  return 0;
}