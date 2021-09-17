#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/best-sightseeing-pair/
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int currVal = values[0];
        int currSum, maxSum=0;
        int n = values.size();
        
        for(int i=1;i<n;i++){
            currVal--;
            currSum=values[i]+currVal;
            maxSum=max(currSum, maxSum);
            currVal = max(currVal, values[i]);
        }
        return maxSum;
    }
};

//main function
int main(){
    //int arr[] = {1, 3, 1, 5, 4};
    // vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Solution ss;
    vector<int> arr = {8,1,5,2,6};
    cout<<ss.maxScoreSightseeingPair(arr)<<endl;
    return 0;
}