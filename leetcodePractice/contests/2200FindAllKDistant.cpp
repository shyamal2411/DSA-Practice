#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-284/problems/find-all-k-distant-indices-in-an-array/
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        for(int i = 0; i < size(nums); i++){
            for(int j = 0; j < size(nums); j++){
            if(abs(i-j)<=k and nums[j]==key){
                ans.push_back(i);
                break;
            }
        }
        }
            return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int key = 5;
    int k = 2;
    vector<int> ans = s.findKDistantIndices(nums, key, k);
    for(int i = 0; i < size(ans); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}