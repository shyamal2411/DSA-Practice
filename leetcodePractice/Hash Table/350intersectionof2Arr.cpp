#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> ans = ss.intersect(nums1, nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}