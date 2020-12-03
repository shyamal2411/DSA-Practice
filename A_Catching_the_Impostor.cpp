#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, x, t, i, p, q, r, s, count = 0, j;
  cin >> n >> k;  // number of players and size of list.
  ll int arr[n];
  fo(i, n) arr[i] =
      0;  // as said in tutorial- to initiate all elements to 0 for frequency

  fo(i, k) {
    cin >> x;  // players
    if (arr[x - 1] == 0)
      arr[x - 1] = 1;
  }
  int ans = 0;
  fo(i, n) {
    if (arr[i])
      ans++;
  }
  if (ans == n - 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
/*
//! code from the tutorial-solution
#include "bits/stdc++.h"
using namespace std;
int main()
{
    set<int> s;
        int n, m;
        cin >> n >> m;
        for(int i = 0;i < m;i++){
                int x;
                cin >> x;
                s.insert(x);
        }
        if(s.size() == n - 1){
                cout << "YES";
        }else{
                cout << "NO";
        }
}
*/
