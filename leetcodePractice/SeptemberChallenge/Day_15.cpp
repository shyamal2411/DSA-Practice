#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-turbulent-subarray/
// https://leetcode.com/problems/longest-turbulent-subarray/discuss/639545/C%2B%2B-Solution
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
       int increase = 1; int decrease = 1; int max_len = 1;
        for(int i=0; i < arr.size()-1; i++){
            if(arr[i] > arr[i+1]){
                increase = decrease + 1;
                decrease = 1;
            }
            else if(arr[i] < arr[i+1]){
                decrease = increase + 1;
                increase = 1;
            }
            else{
                increase = 1;
                decrease = 1;
            }
            max_len = max(max_len, max(increase, decrease));
        }
        return max_len;
    }
};

int main(){
    Solution ss;
    vector<int> nums{9,4,2,10,7,8,8,1,9};
    cout<<ss.maxTurbulenceSize(nums)<<endl;
    return 0;
}