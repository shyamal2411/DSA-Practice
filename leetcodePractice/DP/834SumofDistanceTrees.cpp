#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/sum-of-distances-in-tree/
// https://leetcode.com/problems/sum-of-distances-in-tree/discuss/1390898/C%2B%2B-or-DP-%2B-two-DFS-calls-O(n)-solution
class Solution {
public:
    int numNodes=0;
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        
        //Building graph
        vector<vector<int>> graph(n, vector<int>());
        for(auto e: edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        numNodes=n;
        //dp
        vector<int> dp(n,0);
        vector<int> sz(n,0);

        vector<bool> visited(n,false);
    
        dfs1(0, graph, visited, dp, sz);
        dfs2(0, graph, visited, dp, sz);

        return dp;
    }
    
    int dfs1(int u, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& dp, vector<int>& sz){
        sz[u]++;
        visited[u]= true;
        for(auto v:graph[u]){
            if(!visited[v]){
                dp[u] += dfs1(v, graph, visited, dp, sz) + sz[v];
                sz[u] += sz[v];
            }
        }
        return dp[u];
    }
    
    void dfs2(int u, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& dp, vector<int>& sz){
        visited[u] = false;
        for(auto v: graph[u]){
            if(visited[v]){
                dp[v] = dp[u] + numNodes-2*sz[v];
                dfs2(v, graph, visited, dp, sz);
            }
        }
    }
};

int main(){
    Solution s;
    vector<vector<int>> edges = {{0,1},{0,2},{2,3},{2,4}};
    vector<int> res = s.sumOfDistancesInTree(5, edges);
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}