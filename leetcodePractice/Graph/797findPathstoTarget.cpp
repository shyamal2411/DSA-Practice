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

// https://youtu.be/o6nPTWVTgoA
class Solution2 {
public:
    vector<vector<int>> ans;
    int n;
    vector<int> adj[1000];
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        
        //adj list
        for(int i=0;i<graph.size();i++){
            for(auto j: graph[i])
                adj[i].push_back(j);
        }
        vector<int> a;
        a.push_back(0);
        for(auto i:adj[0])
            dfs(i,a);
        
        return ans;
    }
    void dfs(int node, vector<int> &a){
        if(node == n-1) //if we reach the final node 
        {
            a.push_back(n-1); //push the final node in the vector
            ans.push_back(a);
            a.pop_back(); //as we reached, empty the vector
            return; 
        }
        a.push_back(node); //if there's a node having 2 children
        for(auto i:adj[node])
            dfs(i,a);
        a.pop_back();
        return;
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