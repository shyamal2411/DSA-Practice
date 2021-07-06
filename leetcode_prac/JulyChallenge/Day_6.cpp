class Solution {
 public:
  int minSetSize(vector<int>& arr) {
    int n = arr.size();
    vector<int> v(100005);
    for (int i = 0; i < n; i++)
      v[arr[i]]++;

    sort(v.rbegin(), v.rend());  // go from largest element to smallest
    int total = 0;
    for (int i = 0; i < n; i++) {
      total += v[i];  // increment total everytime, until it reaches n/2 as
                      // stated in quetion
      if (total >= (n / 2))
        return (i + 1);
    }
    return n;
  }
};