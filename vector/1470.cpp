#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

vi shuffle(vi& v, int n) {
  int index = 0;
  vector<int> v2;
  for (int i = 0; i < 2 * n; i += 2) {
    v2[index] = v[i];
    index++;
    for (int j = i + n; j < 2 * n; j += 2) {
      v2[index] = v[j];
      cout << v2[index] << " ";
      index++;
      break;
    }
  }
  return v2;
}

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> v;
    for (int i = 0; i < n; i++) {
      v.push_back(nums[i]);
      v.push_back(nums[n + i]);
    }
    return v;
  }
};

int main() {
  vi v;
  //   vi v1;
  int num, size;
  cin >> size;
  f(i, 0, 2 * size) { cin >> v[i]; }

  Solution shuffle;
  shuffle.shuffle(v, size);

  f(i, 0, 2 * size) { cout << shuffle.shuffle(v, size) << endl; }
}