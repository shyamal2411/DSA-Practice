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