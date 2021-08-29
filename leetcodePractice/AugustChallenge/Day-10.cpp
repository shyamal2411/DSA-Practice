#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/flip-string-to-monotone-increasing/
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flipIt=0, count=0;
        for(auto i:s)
        {
            if(i=='1')
                count++;
            else
                flipIt++;
            
            flipIt=min(flipIt, count);
        }
        return flipIt;
    }
};
//main function
int main()
{
    Solution s;
    cout<<s.minFlipsMonoIncr("00110")<<endl;
    cout<<s.minFlipsMonoIncr("010110")<<endl;
}
/*
TIME COMPLEXITY: O(N)
SPACE COMPLEXITY: O(1)
We loop through the string.
If we got a 1, go on. No need to flip. We just increment the 1 counter.
If we got a 0, we increment the flips counter.
Now, we have two options. Either to flip the new zero to one or to flip all previous ones to zeros.
So we take the min between flips and counter.
*/