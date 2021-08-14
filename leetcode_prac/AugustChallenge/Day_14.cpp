#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/remove-boxes/
class Solution {
public:
    int removeBoxes(vector<int>& boxes)
    {
        int dp[100][100][100] = {0};    // number of boxes would not exceed 100
        int n = boxes.size();
        return help(boxes, 0, n-1, 0, dp);   // in the closed interval [0, n-1]
    }

    int help(vector<int>& boxes, int i, int j, int k, int dp[100][100][100])
    {
        // [i, j] is the operating closed interval
        // k is the number of adjacent boxes on the left of boxes[i] with the same value
        if (i>j) return 0;
        if (dp[i][j][k]>0) return dp[i][j][k];

        // start with boxes[i] and interval [i+1, j]
        int ans = (k+1)*(k+1) + help(boxes, i+1, j, 0, dp);
        for (int m=i+1; m<=j; m++)
        {
            // if boxes[i]==boxes[m], we can thus eliminate interval [i+1, m-1]
            // to make boxes[i] and boxes[m] adjacent to have a higher score
            if (boxes[i]==boxes[m])
                // if boxes[i] and boxes[m] are adjacent, then
                // there will be k+1 boxes on the left of boxes[m] with the same value
                ans = max( ans, help(boxes, i+1, m-1, 0, dp)+help(boxes, m, j, k+1, dp) );
        }
        dp[i][j][k] = ans;
        return ans;
    }
};

int main()
{
    vector<int> boxes = {1, 3, 2, 2, 2, 3, 4, 3, 1};
    Solution s;
    int ans = s.removeBoxes(boxes);
    cout<<"ans="<<ans<<endl;
    return 0;
}