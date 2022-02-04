#include<bits/stdc++.h> 
using namespace std;

int maxProduct(vector<int>& nums) {
    int ans = INT_MIN;
    for(int i=0;i<nums.size()-1;i++) {
        for(int j=i+1;j<nums.size();j++) {
            int prod = 1;
            for(int k=i;k<=j;k++) 
                prod *= nums[k];
            ans = max(ans,prod);    
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<maxProduct(nums)<<endl;
    return 0;
}