#include <bits/stdc++.h>
using namespace std;

/*
A map is a generalized array that consists of key-value-pairs. While the keys in
an ordinary array are always the consecutive integers 0,1,...,n¡1, where n is
the size of the array, the keys in a map can be of any data type and they do not
have to be consecutive values.

The C++ standard library contains two map implementations that correspond
to the set implementations: the structure map is based on a balanced binary tree
and accessing elements takes O(logn) time, while the structure unordered_map
uses hashing and accessing elements takes O(1) time on average.
*/

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i, t, count = 0, j;
  map<string, int> m;
  m["monkey"] = 4;
  m["banana"] = 3;
  m.insert({"shyamal", 50});              // Method to use insert function.
  cout << "m: " << m["shyamal"] << "\n";  // 3

  /*
  If the value of a key is requested but the map does not contain it, the key
is automatically added to the map with a default value. For example, in the
following code, the key ”aybabtu” with value 0 is added to the map.
  */
  map<string, int> m1;
  cout << "m1: " << m1["aybabtu"] << "\n";

  for (auto x : m) {  // to print all the elements.
    cout << x.first << " " << x.second << "\n";
  }
  return 0;
}