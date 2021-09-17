#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-product-subarray/
// https://leetcode.com/problems/maximum-product-subarray/discuss/203013/C%2B%2B-O(N)-time-O(1)-space-solution-with-explanation
// https://leetcode.com/problems/maximum-product-subarray/discuss/48339/C%2B%2B-solution.-4ms-explained.
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        int best =INT_MIN;
        //Running products
        int maxProd=1;
        int minProd=1;
        
        for(int n:nums)
        {
            //Swap max and min
            if(n<0)
                swap(maxProd, minProd);
            //Reset to current value if smaller or larger than it
            //means we start considering new subarray
            maxProd= max(maxProd*n, n);
            minProd= min(minProd*n, n);
            //update the best
            best=max(best, maxProd);
        }
        return best;
    }
};

int main()
{
    Solution s;
    vector<int> nums={2,3,-2,4};
    cout<<s.maxProduct(nums)<<endl;
    return 0;
}