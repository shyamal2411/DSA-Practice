class Solution {
 public:
  int arraySign(vector<int>& nums) {
    int count = 0, ans;
    for(itr:nums)
    {
            count*=nums[itr];
    }
    if (nums[itr] == 0)
      return 0;

      if(count>0)
      return 1;
      else
      return -1;

 }
};