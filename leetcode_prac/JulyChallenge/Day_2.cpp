class Solution {
 public:
  vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int low = 0;
    int high = arr.size() - k - 1;

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (x - arr[mid] > arr[mid + k] - x)
        low = mid + 1;

      else
        high = mid - 1;
    }

    vector<int> res(arr.begin() + low, arr.begin() + low + k);
    return res;
  }
};