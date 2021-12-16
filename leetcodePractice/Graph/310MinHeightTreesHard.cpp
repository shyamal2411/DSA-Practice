#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-height-trees/
// https://leetcode.com/problems/minimum-height-trees/discuss/897095/C%2B%2B-BFS-Solution-Explained
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        //only one node
        if(n == 1)
            return vector<int> {0};
    
    //graph adjacency listof nodes
        vector<vector<int>> graph(n);
        
        //degree count of nodes
        vector<int> degree(n, 0);
        
        //populate graph adjacency list and degree count of nodes
        for(int i = 0; i< edges.size(); i++){
            int a = edges[i][0];
            int b = edges[i][1];
            
            graph[a].push_back(b);
            graph[b].push_back(a);
            degree[a]++;
            degree[b]++;
        }
        queue<int> q;
        
        //push degree 1 node into the queue
        for(int i = 0; i < n; i++)
            if(degree[i] == 1)
                q.push(i);
        
        // MHT root nodes
        vector<int> ans;
        
        //run BFS until queue is empty
        while(!q.empty()){
            int n = q.size();
            //clear root nodes
            ans.clear();
            
            //perform level order traversal
            while(n--){
                int node = q.front();
                q.pop();
                //add current into root node vector
                ans.push_back(node);
                //process neighbour nodes
                for(int i = 0; i<graph[node].size(); i++){
                    //decrease degree of neighbour nodes
                    degree[graph[node][i]]--;
                    
                    //push lead nodes in queue
                    if(degree[graph[node][i]]==1)
                        q.push(graph[node][i]);
                }
            }
        }
        return ans;
    }
};