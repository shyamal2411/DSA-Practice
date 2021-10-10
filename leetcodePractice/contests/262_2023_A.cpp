#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/two-out-of-three/
class Solution {
public:
  vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

    vector<int>v;
    unordered_map<int,int>m1;
    unordered_map<int,int>m3;
    unordered_map<int,int>m3;
    for(int i=0; i<nums1.size(); i++)
    {
        m1[nums1[i]]++;
    }
    for(int i=0; i<nums2.size(); i++)
    {
        m3[nums2[i]]++;
    }
    
    for(int i=0; i<nums2.size(); i++)
    {
        if(m1[nums2[i]] && !m3[nums2[i]])
        {
            v.push_back(nums2[i]);
            m3[nums2[i]]++;
        }
            
    }
    for(int i=0; i<nums3.size(); i++)
    {
        if(m1[nums3[i]] &&  !m3[nums3[i]])
        {
            v.push_back(nums3[i]);
            m3[nums3[i]]++;
        }
            
    }
    
    for(int i=0; i<nums3.size(); i++)
    {
        if(m3[nums3[i]] &&  !m3[nums3[i]])
        {
            v.push_back(nums3[i]);
            m3[nums3[i]]++;
        }
            
    }
    return v;
}
};


int main(){
    Solution ss;
    vector<int> nums1={1,1,3,2};
    vector<int> nums2={2,3};
    vector<int> nums3={3};

    cout<<ss.twoOutOfThree(nums1,nums2,nums3)<<endl;
    return 0;
}