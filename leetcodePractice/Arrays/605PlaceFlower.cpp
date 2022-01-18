#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
       int count = 0; // created a count variable
        
        for(int i = 0; i < nums.size(); i++){ // start looping from 1st position till end of the array
            if(nums[i] == 0){ // only if flower plant place is empty we will gonna perform this logic
                // creating two values previous & next. Are they 0 or 1
                int prev = (i == 0 || nums[i - 1] == 0) ? 0 : 1;
                int next = (i == nums.size() - 1 || nums[i + 1] == 0) ? 0 : 1;
                
                if(prev == 0 && next == 0){ // and only if these two values are 0
                    nums[i] = 1; // will plant a flower
                    count++; // increment the count
                }
            }
        }
        return count >= n; // in the end we just need to check is count we get is greater or equals to n

    }
};

int main(){
    Solution s;
    vector<int> arr = {1,0,0,0,1};
    cout<<s.canPlaceFlowers(arr,1);
    return 0;
}