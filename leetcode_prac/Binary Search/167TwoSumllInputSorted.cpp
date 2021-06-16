class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    // pure binary search approach
    vector<int> sum;

    for (int x = 0; x < numbers.size(); x++) {
      int low = 0, high = numbers.size() - 1;

      while (low <= high) {
        int mid = (high + low) / 2;

        if (numbers[mid] == target - numbers[x]) {
          if (mid == x)
            low = mid + 1;
          else {
            sum = {x + 1, mid + 1};
            return sum;
          }
        } 
        else if (numbers[mid] < target - numbers[x]) {
          low = mid + 1;
        } else
          high = mid - 1;
      }
    }
    return sum;
  }
};