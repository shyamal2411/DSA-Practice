#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(const auto &i:nums)
            mp[i]++;
        
        // pair: (-frequency, key)
        vector<pair<int, int>> p;
        for(auto it=mp.begin();it!=mp.end();it++)
            p.emplace_back(-(it->second), it->first);
        
        //nth element() call will put the (k-1)th element on its position
        //the left (k-1) element
        nth_element(p.begin(), p.begin()+k-1, p.end());
        
        vector<int> res;
        for(int i=0;i<k;i++)
            res.emplace_back(p[i].second);
        
        return res;
    }
};

class Solutionn {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto i:nums)
            mp[i]++;
        
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        //pair<first, second> first is freq, second is number
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size()>(int)mp.size()-k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};

int main(){
    Solutionn s;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> res = s.topKFrequent(nums, k);
    for(auto i:res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}