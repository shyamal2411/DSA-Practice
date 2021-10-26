#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/largest-number/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
     string ans = "";
		//using string comparison while sorting
        sort(nums.begin(), nums.end(),[](const int &m, const int &n) {
                return to_string(m) + to_string(n) >  to_string(n) + to_string(m);
            }
        );
        for(int i: nums) 
            ans += to_string(i);
        if(ans[0] == '0') 
            return "0";
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,30,34,5,9};
    cout<<s.largestNumber(nums);
    return 0;
}