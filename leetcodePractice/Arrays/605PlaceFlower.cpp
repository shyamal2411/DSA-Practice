#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/can-place-flowers/

// BETTER SOLUTION
class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
      int total = 0;
        for(int i = 0; i < nums.size() && total < n; i++){
            
            //if we encounter 0, check for next & prev index
            if(nums[i] == 0){
                
                // if we reach last index, then consider next to be 0, otherwise for regular cases consider next index
                int next = (i == nums.size() - 1) ? 0 : nums[i+1];
                //same for 1st index, consider prev index as 0, same for regular cases
                int prev = (i == 0) ? 0 : nums[i-1];
     
                //now if both next and prev are 0, make current index as 1, increment total
                if(next == 0 && prev == 0)
                {
                    nums[i]= 1;
                    total++;
                }
            }
        }
        //if total equals the given n, true else false
        return total == n;
    }
};

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