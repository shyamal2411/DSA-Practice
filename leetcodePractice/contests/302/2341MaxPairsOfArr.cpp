#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
      unordered_map<int,int> mp;
        vector<int> ans;
        int ans1=0,ans2=0;

            for(auto i:nums)
            mp[i]++;
        
        for(auto i: mp)
        {
            if(i.second % 2 != 0)
            {
                ans1 += (i.second/2);
                ans2++;
            }
            else
            {
                ans1 += (i.second/2);
            }
            //cout<<i.second<<" "<<ans1<<endl;
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;     
    }
};

int main(){
Solution ss;
vector<int> vec = {};
return 0;
}