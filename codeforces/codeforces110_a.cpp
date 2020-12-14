/* Petya calls a number nearly lucky if the **number of lucky digits in it is a
 * lucky number. THIS IS THE MAIN LINE FOR THE  CODE!**
 */

#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  int count = 0;
  while (n != 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      count++;
    }
    n /= 10;
  }
  if (count == 4 || count == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}