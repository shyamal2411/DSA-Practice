#include <bits/stdc++.h>
using namespace std;


/*
Algorithm

Find maximum height of bar from the left end upto an index i in the array \text{left\_max}left_max.
Find maximum height of bar from the right end upto an index i in the array \text{right\_max}right_max.
Iterate over the \text{height}height array and update ans:
Add \min(\text{left\_max}[i],\text{right\_max}[i]) - \text{height}[i]min(left_max[i],right_max[i])−height[i] to \text{ans}ans

*/

class Solution {
 public:
  int trap(vector<int>& height) {
    if (height.empty())
      return 0;
    int i, ans = 0;
    int size = height.size();
    vector<int> left(size), right(size);
    left[0] = height[0];

    for (i = 1; i < size; i++)
      left[i] = max(height[i], left[i - 1]);

    right[size - 1] = height[size - 1];
    for (i = size - 2; i >= 0; i--)
      right[i] = max(height[i], right[i + 1]);

    for (i = 1; i < size - 1; i++)
      ans += min(left[i], right[i]) - height[i];

    return ans;
  }
};
//Time: O(n)
//Space: O(n)

int main() {
  vector<int> height;
  height.push_back(1);
  height.push_back(0);
  height.push_back(2);
  height.push_back(0);
  height.push_back(1);
  height.push_back(3);
  height.push_back(2);
  height.push_back(1);
  height.push_back(0);
  Solution obj;
  int ans = obj.trap(height);
  cout << ans << endl;
  return 0;
}