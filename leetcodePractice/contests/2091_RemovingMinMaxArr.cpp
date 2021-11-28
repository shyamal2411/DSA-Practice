#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin(); // index of max element
        int minIdx = min_element(nums.begin(), nums.end()) - nums.begin(); // index of min element
        int n = nums.size();
        
        int left = max(maxIdx, minIdx) + 1; // no. of deletions if we try to delete from left
        int right = n - min(maxIdx, minIdx); // no. of deletions if we try to remove from right
        int opp = min(maxIdx, minIdx) + 1 + n - max(maxIdx, minIdx); // deletions from opposite directions
        return min(opp, min(left, right)); // return minimum of the three
    }
};

int main(){
    Solution s;
    // vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    vector<int> nums = {2,10,7,5,4,1,8,6};
    cout << s.minimumDeletions(nums) << endl;
    return 0;
}

/*
There are three cases to get the minimum steps to remove min number and max number:

1. Remove from left, includes min and max,
2. Remove from right, includes min and max.
3. Remove from left and right.
The answer is the minimum result of these three cases.

*/