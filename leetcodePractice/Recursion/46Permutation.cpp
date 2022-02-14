// !SOLUTION FOR INTEGER VALUES

// #include<bits/stdc++.h> 
// using namespace std;

// class Solution {
// public:
//      typedef vector<int> vi;
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vi> ans;
//         recur(0, nums, ans);
//         return ans;
//     }
    
    
//     void recur(int index, vector<int> &nums, vector<vi> &ans){
// //         base case
//         if(index == nums.size()){
//             ans.push_back(nums);
//             return;
//         }
        
//         for(int i = index; i < nums.size(); i++){
//             swap(nums[index], nums[i]);
//             recur(index+1, nums, ans);
//             swap(nums[index], nums[i]);
//         }
//     }
    
// };

// int main(){
//     Solution ss;
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> ans = ss.permute(nums);
//     for(auto v: ans){
//         for(auto i: v){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// !SOLUTION FOR CHAR VALUES

#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
     typedef vector<char> vi;
    vector<vector<char>> permute(vector<char>& nums) {
        vector<vi> ans;
        recur(0, nums, ans);
        return ans;
    }
    
    
    void recur(int index, vector<char> &nums, vector<vi> &ans){
//         base case
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            recur(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
    
};

int main(){
    Solution ss;
    vector<char> nums = {'a','b','c'};
    vector<vector<char>> ans = ss.permute(nums);
    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}