#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int a, b;
  in >> a >> b;
  out << a + b << "\n";
  return 0;
}