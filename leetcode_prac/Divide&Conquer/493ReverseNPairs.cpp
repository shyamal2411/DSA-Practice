#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-pairs/
class Solution {
public:
    
    int count=0;
    
    void countHelp(vector<int>& nums,int start, int mid, int end){
        
        //2 pointers
        int left=start, right=mid+1;
        while(left<=mid && right<=end){
            if((long) nums[left] > (long)2* nums[right]){
                count+=(mid-left+1);
                right++;
            }
            else
            {left++;}
        }
    //Worst case: nlog(n)
        sort(nums.begin()+start, nums.begin()+end+1);
        return;
        
        //Sorting every step 
    }
    void mergeSort(vector<int>& nums, int start, int end){
        if(start==end)
            return;
        int mid=(start+end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        
        countHelp(nums, start, mid, end);
        return;
    }
    
    int reversePairs(vector<int>& nums) {
        if(!nums.size())
            return 0;
         count=0;
        mergeSort(nums, 0, nums.size()-1);
        return count;
    }
};
int main(){
    vector<int> nums={1,3,2,3,1};
    Solution myclass;
    int ret=myclass.reversePairs(nums);
    cout<<ret<<endl;
    return 0;
}