#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/4sum-ii/
class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        vector<int> v;
        int i,j;
        
//         Merge A,B. Store in v
        for(i = 0; i < a.size(); i++){
            for(j = 0; j < b.size(); j++){
                v.push_back(a[i] + b[j]);
            }
        }
        map<int,int> mp;
//         Merge C,D and store count in map m
        for(i = 0; i < c.size(); i++){
            for(j = 0; j < d.size(); j++){
                mp[c[i]+d[j]]++;
            }
        }
        int ans = 0;
        for(i = 0; i < v.size(); i++)
            ans+=mp[-v[i]];
        
        return ans;
    }
};

/*
Let's get the thinking process as solution is very easy. What I thought was if i had only two list that is A,B i could iterate over every element of A and try to find if there is any element in B present which can sum up with A's element to give sum zero. The finding thing can be easily done by binary_search or maps.
So I concluded I just have to convert these 4 arrays to 2. and DONE here this question ends. thats all you need to think

merge A,B (iterate every element of A and add it to every element of B and store the sum in an array/vector).
similarly merge C,D (store the count of each sum in map that is what I used).
Finally,
iterate the merged array formed by merging A,B and search map for element that will sum up to zero.

*/

int main(){
    Solution s;
    vector<int> a = {1,2};
    vector<int> b = {-2,-1};
    vector<int> c = {-1,2};
    vector<int> d = {0,2};
    cout<<s.fourSumCount(a,b,c,d);
    return 0;
}