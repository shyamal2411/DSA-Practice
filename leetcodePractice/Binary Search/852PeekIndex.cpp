class Solution {
 public:
  int peakIndexInMountainArray(vector<int>& arr) {
    // method-1
    // return max_element(arr.begin(), arr.end()) - arr.begin(); //not working
    return distance(arr.begin(), (arr.begin(), arr.end()));
    // distance basically gives length of arr/ vector
  }
};

// method-2
class Solution {
 public:
  int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0, high = arr.size() - 1, mid;
    while (low < high) {
      mid = (low + high) / 2;
      if (arr[mid] < arr[mid + 1])
        low = mid + 1;
      else
        high = mid;
    }
    return low;
    int ans = 0;
    for (int i = 1; i + 1 < arr.size(); i++) {
      if (arr[i] > arr[i + 1])
        ans = i;
    }
    return ans;
  }
};

// method-3
class Solution {
 public:
  int peakIndexInMountainArray(vector<int>& arr) {
    // method-3
    for (int i = 1; i + 1 < arr.size(); ++i)
      if (arr[i] > arr[i + 1])
        return i;
  }
};