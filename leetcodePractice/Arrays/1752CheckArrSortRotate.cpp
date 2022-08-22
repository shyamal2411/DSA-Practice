#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    bool check(vector<int>& nums) {
//         vector<int> mum = nums;
//         sort(mum.begin(), mum.end());
//         if(mum == nums) return true;
    
        int n = nums.size(), count = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i+1)%n]){ count++; }
        }
        return (count<=1);
    }
};

int main(){
Solution ss;
vector<int> nums = {3,4,5,1,2};
if(ss.check(nums)) cout<< "true"; 
else cout<<"false";
return 0;
}