#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/biweekly-contest-83/problems/number-of-zero-filled-subarrays/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, ans = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
                ans+=count;
            }
            else{
                count = 0;
            }
        }
        return ans;
    }
};

int main(){
Solution ss;
vector<int> vec = {0,1,0,1,1};
cout<<ss.zeroFilledSubarray(vec);
return 0;
}