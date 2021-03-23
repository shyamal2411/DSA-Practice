#include <bits/stdc++.h>
using namespace std;

bool f(int x, int y) {
  return x > y;
}

void vectorFunction() {
  // Vector is nothing but an array or list
  vector<int> A = {1, 2, 3, 4};

  cout << A[1] << endl;  // to access the element of vector

  sort(A.begin(), A.end());  // O(NlogN)

  // 2,3,11,14
  bool present = binary_search(A.begin(), A.end(), 3);
  present = binary_search(A.begin(), A.end(), 4);  // should be false.

  A.push_back(100);
  present = binary_search(A.begin(), A.end(), 100);  // should be true.

  // 2,3,11,14,100
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(123);
  for (int x : A) {
    cout << x << " ";
  }  // to print the elements of vector
  // 2,3,11,14,100,100,100,100,100,123

  //   vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
  /*alternate way to not write that big line*/
  auto it = lower_bound(A.begin(), A.end(), 100);  // >=
  //   vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);  // >
  /*alternative*/
  auto it2 = upper_bound(A.begin(), A.end(), 100);  // >

  cout << *it << " " << *it2 << endl;

  cout << it2 - it << endl;
  // shows numbers of times 100 was there in the vector. O(1)time

  /* Applications of vector in real programs
  1. Sorting
  2.Binary search
  3. If vector is already sorted, then we can perform upper bounds and lower
  bounds on it
  */

  // SORTING IN REVERSE ORDER.
  sort(A.begin(), A.end(), f);
  // vector<int>::iterator it3;

  //   for (it3 = A.begin(); it3 != A.end(); it3++)
  /*ALTERNATE LOOP*/
  //   for (int &x : A)
  //   // can be used simply as x also but used &x to iterate by reference.
  //   {
  //     x++;
  //     cout << x << " ";
  //   }
  for (int x : A) {
    x++;  //! this x++ has different roles in both the for loops!
    cout << x << " ";
  }
  cout << endl;
  /*
  DRAWBACKS
  WE'RE FIRT SORTING AND THENN ONLY PERFORM FUNCTIONS LIEK UPPER BOUND AND
  LOWERBOUND
  */
}

void setFunction() {
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(-10);
  s.insert(3);
  s.insert(-4);

  for (int y : s) {
    cout << y << " ";
  }
  cout << endl;

  /*Set constatntly arranges the elements in ascending manner
  while inserting, refer the above example for the same.*/
  /*input time is Logn time, this is where set beats vector, as vector
  disturbs the whole array while set arranges the array, time taken by vector is
  O(n), that of set is logn*/

  auto it = s.find(-1);
  if (it == s.end()) {
    cout << "not present\n";
  } else {
    cout << "present\n";
    cout << *it << endl;
  }
}

int main() {
  //  vectorFunction();
  setFunction();
}