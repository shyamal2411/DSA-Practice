#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/flower-planting-with-no-adjacent/
// https://youtu.be/-jsO_KK2HaI
class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        map<int, vector<int>> m;
        vector<int> ans(n);
        
        for(auto a:paths){
            m[a[0]].push_back(a[1]);
            m[a[1]].push_back(a[0]);
        } //creating graph
        
        for(int i=1;i<=n;i++){
            vector<int> color(5, 0);
            for(auto a:m[i]){
                color[ans[a-1]]=1;
            }
            for(int j=1;j<=4;j++){
                if(color[j]==0)
                {
                    ans[i-1]=j;
                    break;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> v{{1,2},{2,3},{3,4},{4,1},{1,5}};
    vector<int> ans=s.gardenNoAdj(5, v);
    for(auto a:ans)
        cout<<a<<" ";
    return 0;
}