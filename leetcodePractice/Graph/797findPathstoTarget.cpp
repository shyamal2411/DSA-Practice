#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/all-paths-from-source-to-target/
class Solution {
public:
        int target;
        vector<vector<int>> ans;
        vector<int> temp;
    
    void dfs(vector<vector<int>> &graph, int currNode){
        //updating temp
            temp.push_back(currNode);
        //either update ans with it if target if met
        if(currNode == target)
            ans.push_back(temp);
        //or calling dfs again recursively
        else{
            for(int node : graph[currNode])
                dfs(graph, node);
        } 
        //backtracking with temp
            temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size() -1;
        dfs(graph,0);
        return ans;
    }
};


int main(){
    Solution s;
    vector<vector<int>> graph = {{1,2},{3},{3},{}};
    vector<vector<int>> ans = s.allPathsSourceTarget(graph);
    for(vector<int> v : ans)
        for(int i : v)
            cout<<i<<" ";
    cout<<endl;
    return 0;
}