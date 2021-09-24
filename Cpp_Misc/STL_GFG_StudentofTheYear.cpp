/*https://practice.geeksforgeeks.org/problems/student-of-the-year/1/?category[]=STL&category[]=STL&page=1&query=category[]STLpage1category[]STL#*/
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
/*Function to sort students with respect to their marks
 * v : vector input with student name and their marks
 * N : size of vector
 * Your need to implement comparator to sort on the basis of marks.
 */

bool cmp(pair<string, int> p, pair<string, int> q) {
  if (p.second > q.second) {
    return true;
  }

  else if (p.second == q.second) {
    if (p.first < q.first) {
      return true;
    } else {
      return false;
    }
  }
  return false;
}

vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N) {
  sort(v.begin(), v.end(), cmp);
  return v;
}

// { Driver Code Starts.

// Driver code
int main() {
  int testcase;
  cin >> testcase;

  while (testcase--) {
    int N;
    cin >> N;

    // Declaring vector
    vector<pair<string, int>> v;

    // Taking input to vector
    for (int i = 0; i < N; i++) {
      string s;
      cin >> s;
      int k;
      cin >> k;
      v.push_back(make_pair(s, k));
    }

    // Calling function
    v = sortMarks(v, N);

    // Printing student name with their marks
    for (auto it = v.begin(); it != v.end(); it++) {
      cout << it->first << " " << it->second << endl;
    }
  }

  return 0;
}
/*
Input:
N = 4
michal 56
john 100
abbas 98
jordan 45

Output:
john 100
abbas 98
michal 56
jordan 45
*/