#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/smallest-integer-divisible-by-k/
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int num = 0;
        for(int i = 1; i <= k; i++){
            num = (num*10)%k+1;
            if(num%k == 0)
                return i;
        }
        return -1;
    }
};

int main(){
    Solution ss;
    // cout<<ss.smallestRepunitDivByK(1)<<endl;
    cout<<ss.smallestRepunitDivByK(2)<<endl;
    return 0;
}

/*
Intuition:
Let's say the final result has N digits of 1.
If N exist, N <= K, just do a brute force check.
Also if K % 2 == 0, return -1, because 111....11 can't be even.
Also if K % 5 == 0, return -1, because 111....11 can't end with 0 or 5.


Explanation
For different N, we calculate the remainder of mod K.
It has to use the remainder for these two reason:

Integer overflow
The division operation for big integers, is NOT O(1), it's actually depends on the number of digits..

*/