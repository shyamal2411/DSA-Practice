/*
Partition Array into Disjoint Intervals
https://leetcode.com/problems/partition-array-into-disjoint-intervals/solution/
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        int maxx, current, ans=1;
        maxx=current=nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<maxx)
            {
                maxx=current;
                ans=i+1;
            }
            else if(nums[i]>current){
                current=nums[i];
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(9);
    Solution obj;
    int ans=obj.partitionDisjoint(arr);
    cout<<ans<<endl;
    return 0;
}