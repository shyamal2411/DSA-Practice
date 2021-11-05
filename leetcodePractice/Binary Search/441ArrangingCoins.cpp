#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/arranging-coins/submissions/
class Solution {
public:

    /*
    -> 1+2+3+...+x = n
    -> (1+x)x/2 = n
    -> x^2+x = 2n
    -> x^2+x+1/4 = 2n +1/4
    -> (x+1/2)^2 = 2n +1/4
    -> (x+0.5) = sqrt(2n+0.25)
    -> x = -0.5 + sqrt(2n+0.25)
    */
    int arrangeCoins(int n) {
        return floor(-0.5+sqrt((double)2*n+0.25));
    }

    /*Solution I - Simulation
    Just simulate the process of building the steps.
    Each time we increment i and add it to sum.

    Time Complexity: O(n)
    Space Complexity: O(1)
    */
    int arrangeCoins2(int n) {
        long i = 0, sum = 0;
        while (sum <= n) sum += ++i;
        return i-1;
    }

    //Binary Search Approach
     int arrangeCoins3(int n) {
        long left=0, right=n;
        long k, curr;
        while(left<=right){
            k=left+(right-left)/2;
            curr=k*(k+1)/2;
            
            if(curr==n)
                return (int)k;
            
            if(n<curr){
                right=k-1;
            }
            else{
                left=k+1;
            }
        }
        return (int) right;
    }
};