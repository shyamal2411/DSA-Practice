// C program for Left Rotation and Right
// Rotation of a String
#include <bits/stdc++.h>
using namespace std;

// In-place rotates s towards left by d
void leftrotate(string& s, int d) {
  reverse(s.begin(), s.begin() + d);
  reverse(s.begin() + d, s.end());
  reverse(s.begin(), s.end());
}

// In-place rotates s towards right by d
void rightrotate(string& s, int d) {
  leftrotate(s, s.length() - d);
}

// Driver code
int main() {
  string str1; int d0;
  cin>>str1>>d0;
  leftrotate(str1, d0);
  cout << str1 << endl;

  string str2; int d1;
  cin>>str2>>d1;
  rightrotate(str2, d1);
  cout << str2 << endl;
  return 0;
}
