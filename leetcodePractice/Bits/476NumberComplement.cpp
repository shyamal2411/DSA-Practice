#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int findComplement(int num) {
       // int i = 1;
       //  while(i <= num)
       //      num ^= i,
       //      i <<= 1;
       //  return num;
        int mask = -1;                               // -1 is represented in binary as all bits set to 1
        while(mask & num) mask <<= 1;               // remove rightmost bits 1 by 1 till no common bits are left
        return ~mask ^ num;                        // XORs with 1 & flips all bits in num starting from the leftmost set bit 
    }
};

/*start from the right-end and flip bits one by one. a bit starting with i=1 and just directly XOR it with num, then left-shift it & repeat thus flipping the bits in num one by one.

We stop as soon i > num. This denotes that we have passed the leftmost set bit in num and thus we have flipped all the bits that needed to be flipped.
*/

int main(){
    Solution ss;
    int num = 5;
    cout<<ss.findComplement(num)<<endl;
    return 0;
}