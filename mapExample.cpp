#include <bits/stdc++.h>
using namespace std;

int main() {
  //   map<string, int> mp;
  //   mp["abc"] = 1;
  //   mp["aqer"] = 5;
  //   mp["asdf"] = 3;
  //   map<string, int>::iterator it;
  // //   for (it = mp.begin(); it != mp.end(); it++)
  //    for(auto &it:mp)
  //     cout << (it).first << " " << (it).second << endl;
  map<string, int> mp;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  for (auto pr : mp) {
      cout << pr.first << " " << pr.second << endl;
  }

  return 0;
}