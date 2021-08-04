#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nth_element(nums.begin(),nums.begin()+nums.size()-k, nums.end());
    return nums[nums.size()-k];
    }
};

/*nth_element function
https://www.geeksforgeeks.org/stdnth_element-in-cpp/
*/

int main()
{
    Solution s;
    vector<int> nums{3,2,1,5,6,4};
    int k=2;
    cout<<s.findKthLargest(nums,k)<<endl;
    return 0;
}