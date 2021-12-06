#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0, odd = 0;
        for(int i:position){
            if(!(i&1)) // if even
                even++;
            else
                odd++;
        }
        return min(odd, even);
    }
};

int main(){
    Solution ss;
    vector<int> position = {2,2,2,3,3};
    // vector<int> position = {1,1000000000};
    cout<<ss.minCostToMoveChips(position);
    return 0;
}