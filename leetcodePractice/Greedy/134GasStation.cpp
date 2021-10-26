#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/gas-station/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i, netGas = 0;
        for(i = 0;i < gas.size(); i++){
            netGas += gas[i] - cost[i];
        }
        if(netGas < 0)
            return -1;
        int currGasAvail = 0, startIndex = 0;
        
        for(i = 0;i < gas.size(); i++){
            currGasAvail += gas[i] - cost[i];
            if(currGasAvail < 0){
                startIndex = i + 1;
                currGasAvail = 0;
            }
        }
        return startIndex;
    }
};

int main(){
    Solution s;
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout<<s.canCompleteCircuit(gas, cost)<<endl;
    return 0;
}