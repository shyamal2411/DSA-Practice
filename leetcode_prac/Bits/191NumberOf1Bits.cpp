#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return bitset<32>(n).count();
    }
};

//main function
int main(){
    int n = 0;
    cin>>n;
    Solution ss;
    cout<<ss.hammingWeight(00000000000000000000000000001011);
    // cout<<ss.hammingWeight(00000000000000000000000010000000);
    // cout<<ss.hammingWeight(11111111111111111111111111111101);
    //NOTE: CIN ISN'T WORKING IN THIS, SO PASS THE NUMBER IN ARGUEMENT 
    return 0;
}


// int main(){
//     uint32_t n;
//     cin>>n;
//     Solution ss;
//     int ans=ss.hammingWeight(n);
//     cout<<ans<<endl;
//     return 0;
// }