#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
class Solution {
public:
    
    static bool compare(string &a, string &b){
        if(a.size()==b.size())
            return a<b;
        
        return a.size()<b.size();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), compare);
        
        return nums[nums.size()-k];
    }

string kthLargestNumber1(vector<string>& nums, int k) {
//  ABOVE CODE IS THE SIMPLER VERSION OF THIS ONE
sort(nums.begin(), nums.end(), [](auto &a, auto &b){
if(a.size()==b.size()){
    return a<b;
}
return a.size()<b.size();
});
return nums[nums.size()-k];
    }
};

int main(){
    Solution s;
    vector<string> nums = {"3","30","34","5","9"};
    int k = 2;
    cout<<s.kthLargestNumber(nums, k);
    return 0;
}