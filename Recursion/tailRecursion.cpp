#include <bits/stdc++.h>
using namespace std;

int func(int n) {
  if (n < 1)
    return;

  func(n - 1);
  cout << n << "\t";
  // THIS IS CALLED TAIL RECURSION, IT MEANS THAT
  // FUNCTION CALL OF RECURSION IS THE LAST OPERATION
  // IT HAS TO DO,  WHEN COMPILER SEES THIS TYPE OF TAIL RECUSION, IT CONVERTS
  // THE FUNCTION INTO TAIL CALL,EXAMPLE AS FOLLOWS.
}

int tailFac(int n) {
start:
  if (n < 1)
    return 1;

  n *= n - 1;
  goto start;
}  // THE COMPILER CONVERTS INTO THIS TYPE OF GOTO FUNCTION

//! PERFECT EXAMPLE OF TAIL RECURSION

int normalFunc(int n) {
  if (n < 1)
    return;

  normalFunc(n - 1);
  cout << n << " ";  // prints 1 to n
  // this is not tail recursive because there's cout operation at the end
}

int tailRecursive(int n, int k) {
  if (n < 1)
    return;

  cout << k << " ";
  return tailRecursive(n - 1, k + 1);
  // NOW THE ABOVE normalFunc IS CONVERTED TO TAIL RECURSIVE
}  // example function

int main() {
  int n;
  cin >> n;
  cout << (n);
  return 0;
}

//! MOST IMPORTANT: qUICK SORT IS FASTER THAN MERGE SORT BECAUSE IT IS