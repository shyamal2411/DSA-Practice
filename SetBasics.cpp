#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
//! An important property of sets is that all their elements are distinct. Thus,
//! the function count always returns either 0(the element is not in the set) or
//! 1(the element is in the set),and the function insert never adds an element
//! to the set if it is already there.

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i, t, count = 0, j;
  set<int> s;
  s.insert(3);
  s.insert(2);
  s.insert(5);
  // count returns
  cout << "Answer of s:"
       << "\n";
  cout << s.count(3) << "\n";  // 1
  cout << s.count(4) << "\n";  // 0
  s.erase(3);
  s.insert(4);
  cout << s.count(3) << "\n";  // 0
  cout << s.count(4) << "\n";  // 1

  set<int> s1 = {2, 5, 6, 8};  // CREATING A SET AND PRINTING IT
  cout << "Size of s1:" << s1.size() << "\n"
       << "Answer of s1:"
       << "\n";        // 4
  for (auto x : s1) {  // BEST WAY TO PRINT USING FOR LOOP
    cout << x << "\n";
  }
  cout << "\n\n";

  set<int> s2;
  s2.insert(5);
  s2.insert(5);
  s2.insert(5);
  cout << "Answer of s2: " << s2.count(5) << "\n\n";  // 1

  /*
 //*MULTISET and unordered_multiset that otherwise work like set and
 unordered_set but they can contain multiple instances of an element. For
 example, in the following code all three instances of the number 5 are added to
 a multiset:
  */
  cout << "MULTISET PART"
       << "\n";
  multiset<int> ms;
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);
  cout << "Count: " << ms.count(5) << "\n";  // 3

     ms.erase(5);
     cout << "After Erase Count: " << ms.count(5) << "\n";  // 0

  /*Sometimes when we want to remove only one duplicate element from the
   * element, then below function is to used.*/
  ms.erase(ms.find(5));
  cout << "Erasing particular element: " << ms.count(5) << "\n";  // 2
  return 0;
}