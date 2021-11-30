#include<bits/stdc++.h> 
using namespace std;

//https://leetcode.com/problems/number-of-operations-to-make-network-connected/
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1)
            return -1;
        vector<vector<int>> adj(n);
        for(auto v: connections){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n, false);
        int components = 0;
        for(int i = 0; i<n; i++){
            if(!visited[i]){
                dfs(adj, visited, i);
                components++;
            }
        }
        return components - 1;
    }
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int src){
        visited[src] = true;
        for(int i : adj[src]){
            if(!visited[i])
                dfs(adj, visited, i);
        }
    }
};

/*
Goal: We need to connect all the computers (directly or indirectly). 
We have to return the minimum number of operations that are required to connect the computers. An operation consists of removing a cable between two directly connected computers and put it between two disconnected computers.

This problem is a simple variation of counting the number of islands.

We know that the minimum number of edges required for a graph with n nodes to remain connected is n - 1. Similarly, if there are k components in a disconnected graph, then we need at least k - 1 edges to connect every component.

With that in our mind, we will start with our base condition. If the number of edges in the graph is greater than n - 1 or not. If not, we will return -1.

Next, we will count the number of components (k). As I already mentioned, we will need k - 1 operations to connect the computers (components). And that is our answer!


*/

int main(){
    Solution s;
    vector<vector<int>> connections = {{0,1},{0,2},{0,3},{1,4}}; 
    cout<<s.makeConnected(6, connections)<<endl;
    return 0;
}