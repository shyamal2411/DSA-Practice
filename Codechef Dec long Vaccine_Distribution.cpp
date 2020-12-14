#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int no_ofpeople, k, t, i, people, q, r, s, counts, flag, j, d;

  cin >> t;
  while (t--) {
    cin >> no_ofpeople >> d;

    ll int risk = 0;
    ll int no_risk = 0;

    fo(i, no_ofpeople) {
      cin >> people;
      if (people >= 80 ||
          people <= 9) {  // given in question, this age should be priority
        risk++;           // there are at risk
      } else {
        no_risk++;
      }
    }

    ll int ans = 0;

    ans +=
        ceil(risk * 1.0 /
             d);  // 1.0 to make it double and ceil is included because 5 risk
                  // vada and 2/per day to 3 days lage khali risk vada mate

    ans += ceil(no_risk * 1.0 / d);

    cout << ans << endl;
  }
}