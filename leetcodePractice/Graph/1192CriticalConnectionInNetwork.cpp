#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/critical-connections-in-a-network/
class Solution {
    vector<vector<int>> adjList;
    vector<vector<int>> bridges;
    //disc -> keeps track of node discovered
    //low ->  track of connected node with lowest discovery time
    //(i.e. it was discovered the earliest)
    //parent -> track of the node's parent
    vector<int> disc, low, parent;
    int time;
    void dfs(int node) {
        //update discovery and low values for a node that has not been visited earier
        //update timer
        disc[node] = low[node] = time++;
        
        //dfs on all the nodes that are connected from the current node
        for(int i = 0; i < adjList[node].size(); ++i)
        {
            int child = adjList[node][i];
            //if node has not been visited before
            if(disc[child] == -1)
            {
                //update parent information for child node
                parent[child] = node;
                dfs(child);
                
                //while backtracking, update low value of parent to check if there is a back-edge
                low[node] = min(low[node],low[child]);
                
                //check if the edge is a bridge and not a back-edge from child/sub-graph of child
                //to it's parent or any of it's ancestors
                if(low[child] > disc[node])
                    bridges.push_back({node,child});
            }
            //check just for a single back-edge
            else if(child != parent[node])
                //check and update if the ancestor was discovered before the earliest connected node to our current node
                low[node] = min(low[node],disc[child]);
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adjList.resize(n);
        disc.resize(n,-1);
        low.resize(n,-1);
        parent.resize(n,-1);
        time = 0;
        
        //build undirected graph
        for(auto& conn : connections)
        {
            adjList[conn[1]].push_back(conn[0]);
            adjList[conn[0]].push_back(conn[1]);
        }

        for(int i = 0; i < n; ++i)
            if(disc[i] == -1)
                dfs(i);
        
        return bridges;
    }
};

int main(){
    int n; cin>>n;
    vector<vector<int>> connections;
    for(int i = 0; i < n-1; ++i)
    {
        int a,b; cin>>a>>b;
        connections.push_back({a,b});
    }
    Solution s;
    auto ans = s.criticalConnections(n,connections);
    for(auto& v : ans)
        cout<<v[0]<<" "<<v[1]<<endl;
    return 0;
}

/*
Input: n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
Output: [[1,3]]
Explanation: [[3,1]] is also accepted.
*/