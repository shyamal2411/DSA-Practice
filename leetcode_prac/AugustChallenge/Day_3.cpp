#include<bits/stdc++.h>
using namespace std;

//  https://leetcode.com/problems/subsets-ii/
class Solution {

    private:
    void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs){
        subs.push_back(sub);
        for(int j=i;j<nums.size();j++){
        if(j!=i && nums[j]==nums[j-1])
            continue; // here's the diff from subsets problem
            sub.push_back(nums[j]);
            subsets(nums, j+1, sub, subs);
            sub.pop_back();
        }
    }
    
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //diff 1
        vector<vector<int>> subs;
        vector<int> sub;
        subsets(nums, 0, sub, subs);
        return subs;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    Solution mysolution;
    vector<vector<int>> subs = mysolution.subsetsWithDup(nums);
    for(int i=0;i<subs.size();i++){
        for(int j=0;j<subs[i].size();j++){
            cout<<subs[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}