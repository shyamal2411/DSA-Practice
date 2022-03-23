#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans = 0;
        while (target > startValue) {
            ans++;
            if (target % 2 == 1)
                target++;
            else
                target /= 2;
        }
        return ans + startValue - target;
    }
};

int main(){
    Solution ss;
    cout<<ss.brokenCalc(2,3)<<endl;
    return 0;
}