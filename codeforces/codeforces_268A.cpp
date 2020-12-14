#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;

  cin >> n;
  int arr1[n], arr2[n];

  for (int i = 0; i < n; i++) {
    cin >> arr1[i] >> arr2[i];
    for (int j = 0; j < i; j++) {
      if (arr1[i] == arr2[j]) { /*this compares the elements on the right with
                                   the left,if the team has same color i.e.
                                   Integer then count will increment.*/
        count++;
      }
      if (arr2[i] == arr1[j]) {
        count++; /*This has to be taken for testcase 2,when 100 of left is to be
                    compared with right side.*/
      }          // to check it,comment this if condition and run the code.
    }
  }
  cout << count << endl;
  return 0;
}

//* The logic of the program is if the home team has same color jersey as the
//guest team then count will increment
//* similarly if the that home team goes to the guest's playground and if they
//have same jersey color then also the count will
//* will increment by 1. That is why 2 if conditions.