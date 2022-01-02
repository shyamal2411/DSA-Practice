#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/discuss/1661803/Easy-C%2B%2B-solution-with-explanation-and-intuition-in-detail
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int i, j;
        int count = 0;
        vector<int> v(60,0);
        for(i = 0; i < time.size(); i++){
            int t = time[i]%60;
            if(t == 0)
                count += v[0];
            else
                count += v[60-t];
            v[t]++;
        }
        return count;
    }
};

int main(){
    Solution ss;
    vector<int> time = {30,20,150,100,40};
    cout<<ss.numPairsDivisibleBy60(time);
    return 0;
}

/*
Logic -
Whenever we consider any number time[i] we can have 2 possibilities :

1) Number is divisible by 60.
2) Number is not divisible by 60.

We basically need to consider the time[i]%60 each time to know if it is==0 or not.
1) If modulo_val==0 we simply do count+=hash[modulo_val]
2) Else we need to find out how far is time[i] away from its next 60 multiple i.e 100 is 20 far from 120 which is a multiple of 60 so if we have a 20 alreay existing then (100,20) can make a valid pair.
3) To achieve this we first do time[i]%60 then subtract it from 60. Like 100 % 60=40 and 60-40=20. So count+=hash[20]
*/
