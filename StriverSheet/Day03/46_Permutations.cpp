#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/permutations/
// https://youtu.be/YK78FU5Ffjw -BEST EXPLANATION
class Solution
{
public:
    typedef vector<int> vi;
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vi> ans;
        vi ds;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            freq[i] = 0; //frequency array to mark all the arr elements as 0
        }
        recurrence(ds, nums, ans, freq);
        return ans;
    }

public:
    void recurrence(vi &ds, vi &nums, vector<vi> &ans, int freq[])
    {
        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurrence(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = s.permute(nums);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}