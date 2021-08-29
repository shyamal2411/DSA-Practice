#include <bits/stdc++.h>
using namespace std;

bool helper(pair<int, int>& p1, pair<int, int>& p2) {
  return (p1.second == p2.second) ? p1.first > p2.first : p1.second < p2.second;
}

/*
> 55 44 6
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (auto& i : a) {
    cin >> i;
  }
  unordered_map<int, int> mp;
  for (auto ele : a) {
    mp[ele]++;
  }

  vector<pair<int, int>> v(mp.size());
  for (auto ele : mp) {
    v.push_back(make_pair(ele.first, ele.second));
  }

  sort(v.begin(), v.end(), helper);
  vector<int> ans;

  for (auto ele : v) {
    while (ele.second--) {
      ans.push_back(ele.first);
    }
  }

  reverse(ans.begin(), ans.end());
  for (auto ele : ans) {
    cout << ele << " ";
  }

  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}