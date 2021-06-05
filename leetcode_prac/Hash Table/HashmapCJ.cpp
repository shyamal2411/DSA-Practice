#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

int main() {
  unordered_map<string, int> mp;

  // insert
  pair<string, int> p("abc", 1);
  mp.insert(p);
  mp["def"] = 2;

  // find or access
  cout << mp["abc"] << endl;     // ans: 1
  cout << mp.at("abc") << endl;  // ans: 1
  /*map. at is used to find if element is located in the hash table or not
  If not then it returns exception that it is not located.
  */
  cout << "size : " << mp.size() << endl;

  //   cout << mp.at("ghi") << endl;
  // as ghi string wasn't in the hash table, it called an exception

  cout << mp["ghi"] << endl;
  // these [] checks if the element is in hash table or not, if its not then it
  // will add it
  // add it at the 0th position

  // erase
  mp.erase("ghi");
  // check presence
  if (mp.count("ghi") > 0) {
    cout << "ghi is present" << endl;
  } else
    cout << "ghi is absent" << endl;
  // size function
  cout << "size : " << mp.size() << endl;

  return 0;
}