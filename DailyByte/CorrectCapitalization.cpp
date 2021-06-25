// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the
// character c is in lowercase or not
bool isLower(char c) {
  return c >= 'a' and c <= 'z';
}

// Function to check if the
// character c is in uppercase or not
bool isUpper(char c) {
  return c >= 'A' and c <= 'Z';
}

// Utility function to check if uppercase
// characters are used correctly or not
bool detectUppercaseUseUtil(string S) {
  // Length of string
  int N = S.size();
  int i;

  // If the first character is in lowercase
  if (isLower(S[0])) {
    i = 1;
    while (S[i] && isLower(S[i]))
      ++i;
    return i == N ? true : false;
  }

  // Otherwise
  else {
    i = 1;

    // Check if all characters
    // are in uppercase or not
    while (S[i] && isUpper(S[i]))
      ++i;

    // If all characters are
    // in uppercase
    if (i == N)
      return true;
    else if (i > 1)
      return false;

    // Check if all characters except
    // the first are in lowercase
    while (S[i] && isLower(S[i]))
      ++i;
    return i == N ? true : false;
  }
}

// Function to check if uppercase
// characters are used correctly or not
void detectUppercaseUse(string S) {
  // Stores whether the use of uppercase
  // characters are correct or not
  bool check = detectUppercaseUseUtil(S);

  // If correct
  if (check)
    cout << "Yes";

  // Otherwise
  else
    cout << "No";
}

// Driver Code
int main() {
  // Given string
  string S = "GeeKs";

  // Function call to check if use of
  // uppercase characters is correct or not
  detectUppercaseUse(S);

  return 0;
}
