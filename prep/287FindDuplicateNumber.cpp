#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                return nums[i];
        }
        return -1;
    }
};
/*
Time Complexity: O(n \log n)O(nlogn)
Sorting takes O(n \log n)O(nlogn) time. This is followed by a linear scan, 
resulting in a total of O(n \log n)O(nlogn) + O(n)O(n) = O(n \log n)O(nlogn) time.
Space Complexity: O(\log n)O(logn) or O(n)O(n)
*/
/*
Intuition
In an unsorted array, duplicate elements may be scattered across the array. 
However, in a sorted array, duplicate numbers will be next to each other.
ALGORITHM:
Sort the input array (numsnums).
Iterate through the array, comparing the current number to the previous number (i.e. compare nums[i]nums[i] to nums[i - 1]nums[i−1] where i > 0i>0).
Return the first number that is equal to its predecessor.
*/

int main(){
    Solution s;
    vector<int> v = {1,3,4,2,2};
    cout<<s.findDuplicate(v)<<endl;
    return 0;
}