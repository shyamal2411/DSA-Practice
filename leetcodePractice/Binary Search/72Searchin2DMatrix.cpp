#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-a-2d-matrix/
// https://youtu.be/ZYpYur0znng 
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;
        int n = matrix.size(), m = matrix[0].size();
        int low = 0, high = (n * m) - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;//this is our imaginary mid
            //row index for imaginary mid is [mid/m]
            //col index for imaginary mid is [mid%m]
            if (matrix[mid / m][mid % m] == target)
                return true;
            if (matrix[mid / m][mid % m] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    cout << s.searchMatrix(matrix, 3) << endl;
    return 0;
}