#include <bits/stdc++.h>
using namespace std;

void tower(int n, char src, char dest, char help) {
  if (n == 0)  // base case
  {
    return;
  }
  tower(n - 1, src, help, dest);
  cout << "Move from" << src << " to " << dest << " " << endl;
  tower(n - 1, help, dest, src);
  cout << endl;
}

int main() {
  tower(3, 'A', 'C', 'B');
  return 0;
}