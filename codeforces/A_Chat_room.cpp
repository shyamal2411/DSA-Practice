#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ll int n, k, t, i, p, q, r, s, pas = 0, j = 0;

  //  char arr[100];
  // for(i=0;i<100;i++){
  // cin>>arr[i];}
  // WRONG APPROACH, DIDN'T PASS HIDDEN TEST CASE.
  //   if (arr[0] == 'a'){
  //     cout << "YES";}
  //   else {
  //     cout << "NO";
  //   }
  //   return 0;
  string a, b = "hello";
  cin >> a;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == b[j]) {  // if the element inserted in string matched with the
                         // element in b i.e. hello
      j++;  // then it will increment by 1, at last if the pas = 5 i.e equal to
            // hello then print yes else no.
      pas++;

      if (pas == 5) {
        break;
      }
    }
  }
  if (pas == 5) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
