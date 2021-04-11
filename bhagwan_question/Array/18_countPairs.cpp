//! BRUTE FORCE APPROACH.

class Solution {
 public:
  int getPairsCount(int arr[], int n, int k) {
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]+arr[j]==k)
    //         count++;
    //     }
    // }
    // return count;

    int count = 0;
    map<int, int> m;  // unordered_map<int,int> m also would work well
    for (int i = 0; i < n; i++) {
      int x = k - arr[i];
      if (m[x] == 0)
        m[arr[i]]++;

      else {
        count += m[x];
        m[arr[i]]++;
      }
    }
    return count;
  }
};