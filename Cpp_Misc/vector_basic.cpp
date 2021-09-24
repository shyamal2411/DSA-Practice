#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)

int main() {
  int n, i, t, count = 0, j;
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  for (i = 0; i < v.size(); i++)
    cout << v[i] << endl;

  // iterator manner
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
    cout << *it << endl;  //   * because iterator is a pointer

  for (auto element : v)
    // auto means we tell the compiler to assign data type by itself.
    cout << element << endl;
  // output will be same

  v.pop_back();
  for (auto element : v)
    cout << element << endl;

  vector<int> v2(3, 50);  // we can assign values of 3 elements i.e. 50 50 50.
  // i.e. if we want, we can give values to the element beforehand.

  // swap(v, v2);
  // v2.pop_back();
  for (auto element : v2)
    cout << element << endl;

sort(v.begin(),v.end());

  return 0;
}