#include <bits/stdc++.h>
using namespace std;

/*Initialize the minimum difference diff with a large value.
Sort the input array nums.
Iterate through the array:
For the current position i, set lo to i + 1, and hi to the last index.
While the lo pointer is smaller than hi:
Set sum to nums[i] + nums[lo] + nums[hi].
If the absolute difference between sum and target is smaller than the absolute value of diff:
Set diff to target - sum.
If sum is less than target, increment lo.
Else, decrement hi.
If diff is zero, break from the loop.
Return the value of the closest triplet, which is target - diff.*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        /*TIME: O(n^2)
          SPACE:O(*/
    int diff = INT_MAX, n = nums.size();
    sort(begin(nums), end(nums));
    for (int i = 0; i < n && diff != 0; ++i) {
        int low = i + 1, high = n - 1;
        while (low < high) {
            int sum = nums[i] + nums[low] + nums[high];
            if (abs(target - sum) < abs(diff))
                diff = target - sum;
            if (sum < target)
                ++low;
            else
                --high;
        }
    }
    return target - diff;
}
};

/* OPTIMIZED SOLUTION
time: O(n^2*logn)
space: O(logn) or O(n) depending on sorting algo
Initialize the minimum difference diff with a large value.
Sort the input array nums.
Iterate through the array (outer loop):
For the current position i, iterate through the array starting from j = i + 1 (inner loop):
Binary-search for complement (target - nums[i] - nums[j]) in the rest of the array.
For the next higher value, check its absolute difference with complement against diff.
For the previous lower value, check its absolute difference with complement against diff.
Update diff based on the smallest absolute difference.
If diff is zero, break from the loop.
Return the value of the closest triplet, which is target - diff.*/

class Solutionn {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX, n=nums.size();
        sort(begin(nums), end(nums));
        for(int i=0;i<n&& diff!=0;i++){
            for(int j=i+1;j<n-1;j++){
                int comp=target-nums[i]-nums[j];
                
                auto it=upper_bound(begin(nums)+ j+1, end(nums), comp);
                int high=it-begin(nums), low=high-1;
                if(high<n && abs(comp-nums[high])<abs(diff))
                    diff=comp-nums[high];
                
                if(low>j && abs(comp-nums[low])<abs(diff))
                    diff=comp-nums[low];
            }
        }
        return target-diff;
    }
};

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    Solution s;
    Solutionn ss;
    cout<<ss.threeSumClosest(nums,target)<<endl;
    // cout<<s.threeSumClosest(nums, target)<<endl;
    return 0;
}