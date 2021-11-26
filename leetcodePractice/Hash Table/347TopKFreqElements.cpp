#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        //To store elements in map
        for(int i : nums)
            mp[i]++;
        
        //push all the elements in vector with frequency
        vector<vector<int>> bucket(nums.size()+1);
        for(auto p: mp)
            bucket[p.second].push_back(p.first);
        //keep them according to frequency

        vector<int> ans;
        for(int i = bucket.size()-1; i>=0 && ans.size()<k; i--){
            for(int n: bucket[i]){
                ans.push_back(n);
                if(ans.size() == k)
                    break;  
            }
        }
        return ans;
    }
    
};

int main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = s.topKFrequent(nums, k);
    for(int i: ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}