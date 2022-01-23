#include<bits/stdc++.h> 
using namespace std;

// Love babbar sheet 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxx=INT_MIN;
        
        for(auto it:nums){
            sum+=it;
            maxx=max(sum, maxx);
            if(sum<0)
                sum=0;
        }
        return maxx; 
    }
};

int main(){
    Solution ss;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<ss.maxSubArray(nums);
    return 0;
}