#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int i,n=nums.size();
        vector<int> ans(n);
        
        int maxInt=pow(2, maximumBit)-1; //condition given in question
        int bit=nums[0];
        
        for(i=1;i<nums.size();i++)
            bit^=nums[i]; //storing every bits of elements
        
        for(i=0;i<nums.size();i++){
            ans[i]=bit^maxInt; //xoring with bits
            bit^=nums[n-i-1];
        }
        return ans;
    }
};

int main(){
    int arr[]={3, 10, 5, 25, 2, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vec(arr,arr+n);
    Solution ss;
    vector<int> ans=ss.getMaximumXor(vec,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}