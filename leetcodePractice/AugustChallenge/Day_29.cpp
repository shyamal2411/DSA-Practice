#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/patching-array/
// https://leetcode.com/problems/patching-array/discuss/78492/C%2B%2B-8ms-greedy-solution-with-explanation
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count=0, i=0;
        long long maxNum=0; //there's a test case having value > int's range
        
        while(maxNum<n){
            if(i<nums.size() && nums[i]<=maxNum+1)
                maxNum+=nums[i++];
            else{
                maxNum+=maxNum+1;
            count++;
            }
        }
        return count;
    }
};

int main(){

    Solution ss;
    vector<int> nums{1,6};
    int n; cin >>n;
    cout<<ss.minPatches(nums, n)<<endl;
    return 0;
}