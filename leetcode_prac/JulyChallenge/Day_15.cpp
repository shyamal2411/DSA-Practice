class Solution {
 public:
  int triangleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i, k, j, n = nums.size(), ans = 0;

    for (k = 2; k < n; k++) {
      i = 0, j = k - 1;

      while (i < j) {
        if (nums[i] + nums[j] > nums[k]) {
          ans += j - i;
          j -= 1;
        } else {
          i += 1;
        }
      }
    }
    return ans;
  }
};
/*
https://leetcode.com/problems/valid-triangle-number/discuss/1339340/C%2B%2BPython-Two-Pointers-Picture-Explain-Clean-and-Concise-O(N2)

TIME:O(n^2)
SPACE: O(logn)
*/

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0, n=nums.size();
         for(int i=0;i<n;i++)
             for(j=i+1;j<n;j++)
                 for(k=j+1;k<n;k++)
                     if(nums[i]+nums[j]>nums[k] &&
                        nums[i]+nums[k]>nums[j] &&  
                       nums[k]+nums[j]>nums[i])
                         count++;
        
        
        return count;
    }
};