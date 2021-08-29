/* https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/ */
class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    //         for (int i=0;i<nums.length;i++)
    //         {
    //             int k=0,ans=0;
    //             if(nums[i]==0)
    //             k--;
    //             while(j<=i && k<0)
    //             {
    //                 if(nums[i]==0)
    //                     k++;

    //                 j++;
    //             }
    //             ans=max(i-j+1,ans);
    //             }
    //         return ans;
    int maximum = 0, start = -1;
    for (int i = 0; i < nums.size(); i++) /*nums.length not accepted. */
    {
      if (nums[i] == 1)
        maximum = max(maximum, i - start);
      else
        start = i;
    }
    return maximum;
  }
};