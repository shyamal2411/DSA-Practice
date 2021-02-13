class Solution {
 public:
  vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size(), t, ans = -1;
    for (int i = n - 1; i >= 0;i--) 
     // start from reverse, go on checking if numbers are greater than
               // swap, and update ans with number
    {
      t = arr[i];
      arr[i] = ans;
      ans = max(ans, t);
    }
    return arr;
  }
};