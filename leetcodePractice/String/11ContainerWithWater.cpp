#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/container-with-most-water/
// https://youtu.be/Uj3gJjg6SXc
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0, left=0, right=height.size()-1;
        
        while(left<right){
            water=max(water, min(height[left], height[right]) * (right-left));
            if(height[left]> height[right])
                right--;
            else
                left++;
        }
        return water;
    }
};

int main(){
    Solution s;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(height);
    return 0;
}