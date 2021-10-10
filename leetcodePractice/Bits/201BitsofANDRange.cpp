#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/bitwise-and-of-numbers-range/
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
      int leftShift=0;
        while(left!=right){
            leftShift++;
            left/=2;
            right/=2;
        }
    return left<<leftShift;
    }
};

int main(){

    Solution ss;
    int left, right;
    left=5;
    right=7;
    cout<<ss.rangeBitwiseAnd(left, right)<<endl;
    return 0;
}
