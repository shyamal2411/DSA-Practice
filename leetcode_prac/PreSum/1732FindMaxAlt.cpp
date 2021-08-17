#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt=0;
        int curAlt=0;
        
        for(int i=0;i<gain.size();i++)
        {
            curAlt+=gain[i];
            maxAlt=max(curAlt, maxAlt);
        }
        return maxAlt;
    }
};

int main()
{
    Solution s;
    vector<int> gain{1,2,3,4,5};
    cout<<s.largestAltitude(gain)<<endl;
    return 0;
}