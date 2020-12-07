#include <bits/stdc++.h>
using namespace std;
// PROGRAM FOR GETTING THE DESIRED POWER OF A NUMBER USING RECURION.
int powerfunc(int base, int power) {
  if (power==0)
    return 1;

  int prevpower = powerfunc(base, power - 1);
  return base *  prevpower;
}

int main() {
 int base,power;
 cin>>base>>power;
  cout << powerfunc(base,power);
  return 0;
}
