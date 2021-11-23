#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-longest-increasing-subsequence/
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<pair<int,int>>dp; // dp[i]={a,b} represents that if we take ith element of nums as the last element in a increasing sequence then a is the length of the biggest sequence and there can be b such sequence of length a and last element as nums[i]
        dp.push_back({1,1});     //base case
        for(int i=1;i<nums.size();i++)
        {
            int len=0;
            int count=0;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])  // to make sure that sequence is increasing
                {                                         //this part can be written in more readable way .this is basically to find the maximum length subsequence and find how many such sequences are possible
                    if(len==dp[j].first)   //if max length we found till now is equal to current length
                    {
                        count+=dp[j].second;// we increment count( no. of combinations)
                    }
                    else if(dp[j].first>len) //if greater len is found
                    {
                        count=dp[j].second; 
                        len=dp[j].first;         //then we set count to this seq count and len(maximum len) to its length 
                    }
                }
            }
            if(count==0)//  in case we dont find any smaller element before it 
            {
                dp.push_back({len+1,1});
            }
            else 
                dp.push_back({len+1,count});
        }
        int len=0;
        int count=0;
        for(int i=0;i<dp.size();i++)// answer would be number of maximum length sequences    
        {
            if(len<dp[i].first)
            {
                len=dp[i].first;
                count=dp[i].second;
            }
            else if(len==dp[i].first)
            {
                count+=dp[i].second;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<int>nums={1,3,5,4,7};
    cout<<s.findNumberOfLIS(nums);
    return 0;
}