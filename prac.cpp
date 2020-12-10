#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define na endl

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, t, i, p, q, r, s, count = 0, j;
  vector<pair<int, int>> v;
  v.push_back({1, 5});
  v.push_back({2, 3});
  v.push_back({1, 2});
  sort(v.begin(), v.end());
  for (i = v[i].begin(); i != v[i].end(); i++) {
    cout << v[i].second << " ";
  }
  return 0;
}