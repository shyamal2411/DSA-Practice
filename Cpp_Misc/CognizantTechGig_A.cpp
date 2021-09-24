#include <bits/stdc++.h>
using namespace std;

main() {
  string parent;
  cin >> parent;
  int test;
  cin >> test;
  while (test--) {
    string child;
    cin >> child;
    if (child == parent) {
      cout << "POSITIVE\n";
    }
    int n = child.size();
    int m = parent.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
      if (parent[j] == child[i]) {
        j++;
      }
      if (j == parent.size()) {
        cout << "POSITIVE\n";
      }
    }
    cout << "NEGATIVE\n";
  }
}