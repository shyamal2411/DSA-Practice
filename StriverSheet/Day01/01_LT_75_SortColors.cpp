#include<bits/stdc++.h>
using namespace std;

//Striver Sheet Day-01 Sort Colors
// Problem: https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
    //DUTCH NATIONAL FLAG ALGORITHM
        int low=0, high=nums.size()-1, mid=0;
        
        while(mid<=high){
            switch(nums[mid]){
                    
                    //element 0
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                    //element 1
                case 1:
                    mid++;
                    break;
                    
                    //element 2
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> nums{2,0,2,1,1,0};
    s.sortColors(nums);
    for(auto i:nums)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}