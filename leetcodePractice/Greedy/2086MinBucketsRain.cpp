#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-number-of-buckets-required-to-collect-rainwater-from-houses/
class Solution {
public:
    int minimumBuckets(string str) {
        // if(str.size() == 1 && str[0] == 'H')
        //     return -1;
        // if(str.size() == 1 && str[0] == '.')
        //     return 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'H'){
                if(i > 0 && str[i-1] == 'B')
                    continue;
                if(i < str.size() - 1 && str[i+1] == '.')
                    str[i + 1] = 'B';
                else if(i>0 && str[i-1] == '.')
                    str[i-1] = 'B';
                else
                    return -1;
            }
        }
        return count(begin(str), end(str), 'B');
    }
};
/*
When we see a house, we have to place a bucket. 
We should place the bucket on the right side - so that bucket can be (potentially) used by the next house.

Continue if we already have a bucket on the left.
Place a bucket on the right, if possible.
Place a bucket on the left, if we can.
We are unable to collect water, return -1.

*/

int main(){
    Solution ss;
    cout<<ss.minimumBuckets("H.H");
    return 0;
}