#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-bits/

class Solution {
public:

    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0, power=31; //power is 31 because it starts from 0 and bits are 32.
        while(n!=0)
        {
            ans+=(n&1) << power;
            n=n>>1;
            power-=1;
        }
        return ans;
    }
};
/*
The key idea is that for a bit that is situated at the index i, after the reversion, its position should be 31-i (note: the index starts from zero).

We iterate through the bit string of the input integer, from right to left (i.e. n = n >> 1). To retrieve the right-most bit of an integer, we apply the bit AND operation (n & 1).

For each bit, we reverse it to the correct position (i.e. (n & 1) << power). Then we accumulate this reversed bit to the final result.

When there is no more bits of one left (i.e. n == 0), we terminate the iteration.
*/
//main function
int main()
{
    Solution s;
    cout<<s.reverseBits(43261596)<<endl;
    cout<<s.reverseBits(964176192)<<endl;
    cout<<s.reverseBits(1)<<endl;
    cout<<s.reverseBits(0)<<endl;
    cout<<s.reverseBits(2147483648)<<endl;
    return 0;
}