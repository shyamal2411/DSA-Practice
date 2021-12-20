#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-absolute-difference/
class Solution {
public:
//SORTING WITH 2 TRAVERSALS
//TIME: O(nlog(n))  SPACE: O(1)
    vector<vector<int>> minAbsDiff2Traverse(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        
        int minPairDiff = INT_MAX;
        for(int i = 0; i < arr.size()-1; i++){
            minPairDiff = min(minPairDiff, arr[i+1] - arr[i]);
        }
        
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i+1] - arr[i] == minPairDiff)
                ans.push_back({arr[i], arr[i+1]});
        }
        return ans;
    }

    vector<vector<int>> minAbsDiff1Traverse(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        
        int minPairDiff = INT_MAX;
        
        for(int i = 0; i < arr.size()-1; i++){
            int currPairDiff = arr[i+1] - arr[i];
            /* If currPairDiff equals minpairdiff, add this pair to the answer list.
            if currpairdiff is smaller than minpairdiff, discard all pairs in answer list and add this pair to the answer list, update the minpairdiff.
            if currpairdiff is larger than minpairdiff, we move ahead.
            */
            if(currPairDiff == minPairDiff)
                ans.push_back({arr[i], arr[i+1]});
            else if(currPairDiff < minPairDiff){
                ans = {};
                ans.push_back({arr[i], arr[i+1]});
                minPairDiff = currPairDiff;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {4,2,1,3};
    vector<vector<int>> ans = s.minAbsDiff2Traverse(arr);
    for(auto i : ans)
        cout<<i[0]<<" "<<i[1]<<endl;
    return 0;
}