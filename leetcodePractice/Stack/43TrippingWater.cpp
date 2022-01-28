#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/trapping-rain-water/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        // corner case covered
        if (height.size() <= 1)
            return 0;
        stack<int> st;
        int water = 0, i = 0;
        // until i doesn't reach height
        while (i < height.size())
        {
            // while stack isn't empty or height[i] is smaller than the top of the stack
            if (st.empty() || height[i] <= height[st.top()])
            {
                st.push(i++); //go on pushing in stack
            }
            else
            {
                int currIndex = st.top(); //assign present index to top
                st.pop();
                if (!st.empty())
                {                                                                             // if stack is not empty
                    int distance = i - st.top() - 1;                                          // calculating distance between top and current index
                    int currentHeight = min(height[st.top()], height[i]) - height[currIndex]; // calculate bounded height between 2 poles
                    water += distance * currentHeight;                                        // add water
                }
            }
        }
        return water;
    }
};
// https://youtu.be/EdR3V5DBgyo?t=365

int main()
{
    Solution ss;
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << ss.trap(height) << endl;
    return 0;
}