#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1 (nums1.begin(), nums1.end());
        set<int> s2 (nums2.begin(), nums2.end());    
        vector <int> s;
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(s));
        return s;
    }
}; //Stack overflow ¯\_(ツ)_/¯

int32_t main(){
    Solution ss;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> s = ss.intersection(nums1, nums2);
    for(int i = 0; i < s.size(); i++)
        cout<<s[i]<<" ";
    return 0;
}