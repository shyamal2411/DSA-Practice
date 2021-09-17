class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int direction = 1, i, top = 0, right = n - 1, bottom = m - 1, left = 0;
        vector<int> v;

        while (left <= right && top <= bottom)
        {
            if (direction == 1)
            {
                for (i = left; i <= right; i++)
                    v.push_back(matrix[top][i]);
                direction = 2;
                top++;
            }
            else if (direction == 2)
            {
                for (i = top; i <= bottom; i++)
                    v.push_back(matrix[i][right]);
                direction = 3;
                right--;
            }
            else if (direction == 3)
            {
                for (i = right; i >= left; i--)
                    v.push_back(matrix[bottom][i]);
                direction = 4;
                bottom--;
            }
            else if (direction == 4)
            {
                for (i = bottom; i >= top; i--)
                    v.push_back(matrix[i][left]);
                direction = 1;
                left++;
            }
        }
        return v;
    }
};