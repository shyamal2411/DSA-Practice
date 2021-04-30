
#include <bits/stdc++.h>
#include <list>
using namespace std;

#define N 8

bool MATRIX[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};

bool knows(int a, int b) {
  return MATRIX[a][b];
}

// Returns -1 if celebrity is not present. If present, returns id (value from 0
// to n-1).
int findCelebrity(int n) {
  // Handle trivial case of size = 2

  stack<int> s;

  int C;  // Celebrity

  for (int i = 0; i < n; i++)
    s.push(i);

  int A = s.top();
  s.pop();
  int B = s.top();
  s.pop();

  while (s.size() > 1) {
    if (knows(A, B)) {
      A = s.top();
      s.pop();
    } else {
      B = s.top();
      s.pop();
    }
  }

  C = s.top();
  s.pop();

  // Last candidate was not examined, it leads one excess comparison (optimize)
  if (knows(C, B))
    C = B;

  if (knows(C, A))
    C = A;

  // Check if C is actually a celebrity or not
  for (int i = 0; i < n; i++) {
    // If any person doesn't know 'a' or 'a' doesn't know any person, return -1
    if ((i != C) && (knows(C, i) || !knows(i, C)))
      return -1;
  }

  return C;
}

int main() {
  int n = 4;
  int id = findCelebrity(n);
  id == -1 ? cout << "No celebrity" : cout << "Celebrity ID " << id;
  return 0;
}