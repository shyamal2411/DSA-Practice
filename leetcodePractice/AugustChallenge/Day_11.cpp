#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/array-of-doubled-pairs/    
// https://leetcode.com/problems/array-of-doubled-pairs/discuss/1396834/C%2B%2B-Simple-and-Easy-Solution-With-Detailed-Explanation
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto num:arr)
            freq[num]++;
        
        sort(arr.begin(), arr.end());
        
        for(auto num: arr){
            if(freq[num] && freq[num*2]){
                freq[num]--;
                freq[num*2]--;
            }
        }
        for(auto [a,b]: freq)
            if(b)
                return false;
        
        return true;
    }
};

int main()
{
    vector<int> arr{1,2,3,4,5,6};
    Solution s;
    cout<<s.canReorderDoubled(arr);
    return 0;
}
/*
Idea:

We keep a frequency map.
Sort the array. Soon I'll explain why it's needed.
For each number, if we can find it and it's double in the map, we decrement their frequencies.
If the map is empty, we return true.

Why does it work?
We need to reorder the array so that we have n/2 pairs of (x, x * 2).
So all we need to do is keep track which numbers we used already for a different pair.
Why do we have to sort?
For example, if we have in the array [2, 4, 8, 1].
We will get to the 2, find it's double - 4, and then the 1 and 8 will stay without a pair!
If we sort, then we go in an ascending order, so it won't happen.


*/