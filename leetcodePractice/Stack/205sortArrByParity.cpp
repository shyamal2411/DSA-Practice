#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        stack<int> pending;//stack that will store the odd numbers
        vector<int> result; //result array
        
        for(int a:nums)//iterate over all the elements of nums
            if(a%2==0) //if the number is even, it is directly pushed into the array
                result.push_back(a);
            else
                pending.push(a); //if it is odd, it will be stored in the stack for later use
        
        while(!pending.empty()){
            result.push_back(pending.top());//pushing all the odd numbers into the array (Note that no more even numbers remain)
            pending.pop();
        }
        
        return result;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {4,2,1,3};
     vector<int> ans = ss.sortArrayByParity(nums);
    // vector<int> ans = s.HashingFindDuplicates(nums);
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
