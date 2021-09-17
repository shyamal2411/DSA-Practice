#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMaxLen(vector<int> &nums)
    {
        int frameStart = -1, firstNeg = -2, len = 0, neg = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            //reset all variables if we encounter 0
            if (nums[i] == 0)
            {
                neg = 0, frameStart = i, firstNeg = -2;
            }
            else
            {
                if (nums[i] < 0)
                    neg++; //number of -ves in current frame(frame excluding zero) )
                if (neg == 1 && firstNeg == -2)
                    firstNeg = i; //init firsting cut neg
                if (neg % 2 == 0)
                    len = max(len, i - frameStart); // if curr count neg is frameStart.
                else
                    len = max(len, i - firstNeg); //first firstNeg after last zero
            }
        }
        return len;
    }
};

int main()
{
    Solution s;
    // vector<int> n = {1, -1, 1, 2, -2, -1};
    // vector<int> n = {1, -2,-3, 4};
    vector<int> n = {0, 1, -2, -3, -4};
    cout << s.getMaxLen(n) << endl;
    return 0;
}