// Prateek narang's level up course
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

vi pairSum(vi arr, int sum) {
  unordered_set<int> s;
  vi result;

  for (int i = 0; i < arr.size(); i++) {
    int x = sum - arr[i];
    if (s.find(x) != s.end()) {
      result.push_back(x);
      result.push_back(arr[i]);
      return result;
    }
    s.insert(arr[i]);  // the most important step! insert afterwards not before!
    //reason of inserting current array element is we may find 2 twice in current example
    //whose sum is already 4, so that's wrong answer as 2 is only once in given set of 
    //elements but we're calculating it twice so we need to insert it
  }
  return {};  // if there's no pair found then return empty vector.
}

int main() {
  vi arr{10, 5, 2, 3, -6, 9, 11};
  int sum = 4;
  auto p = pairSum(arr, sum);
  if (p.size() == 0) {
    cout << " No Pair";
  } else {
    cout << p[0] << "," << p[1] << endl;
  }
  return 0;
}