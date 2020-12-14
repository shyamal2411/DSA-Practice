#include <bits/stdc++.h>
using namespace std;
//!TRICKY AND OBSERVATION BASED QUESTION! DO REVISE IT!!!
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int m, n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n >> m;
  //* Code explanation:
  //* N DENOTES VERTICAL AND M DENOTES HORIZONTAL STICKS.
  //* PLAYER HAS TO REMOVE ONE INTERSECTION POINT I.E. TWO STICKS ARE TO BE
  //REMOVED.
  //* SO IF THE STICKS ARE GREATER THEN MALVIKA WILL WIN AS SHE WILL TAKE THE
  //TURN FIRST.
  if (n > m)
    i = m;
  else
    i = n;

  if (i % 2 == 0)
    cout << "Malvika";
  else
    cout << "Akshat";

  return 0;
}