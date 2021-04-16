class Solution {
 public:
  int arraySign(vector<int>& nums) {
    int count = 0, ans;
    for (auto n : nums) {
      if (n == 0)
        return 0;
      else if (n < 0)
        count++;
    }
    if (count % 2 == 0)
      return 1;
    return -1;
  }
};

/*
!WRONG APPROACH:
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0,ans;
        for(auto itr: nums)
        {
            count =count*nums[itr];
        }
        if(count>0)
            ans=1;
           // cout<<"1";
        // return 1;
        if(count<0)
            ans=-1;
            // cout<<"-1";
            // return -1;
        if(count==0)
            ans=0;
            // cout<<"0";
            // return 0;

         return ans;
    }
};
*/