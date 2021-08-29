#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-if-path-exists-in-graph/
// https://leetcode.com/problems/find-if-path-exists-in-graph/discuss/1409030/C%2B%2B-oror-100-FASTER-oror-EXPLAINED-3-Approaches-%3A-DFS-BFS-UnionFind
class BFS_Solution {
public:
    
    //BFS APPROACH
    bool validPath(int n, vector<vector<int>>& edges, int start, int end)     {
    int i;
        vector<vector<int>> graph(n);
        //Building the graph
        for(i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        //BFS
        queue<int> q;
        vector<int> visited(n,0);
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            if(top==end)
                return true;
            
            for(i=0;i<graph[top].size();i++){
                if(visited[graph[top][i]]==0){
                    q.push(graph[top][i]);
                    visited[graph[top][i]]=1;
                }
            }
        }
        return false;
    }
};

class DFS_Solution {
public:
    // int i=0;
    //DO NOT ASSIGN VARIABLES LIKE i AS GLOBAL VARIABLES, THEY ARE THE REASON FOR WRONG ANSWER
    bool dfs(vector<vector<int>>& graph, vector<int>& visited, int current, int end) {
        if(current == end)
            return true;
        if(visited[current])
            return false;
        
        visited[current] = 1;
        
        for(int i=0; i<graph[current].size(); i++){
            if(dfs(graph, visited, graph[current][i], end))
                return true;
        }
        
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> graph(n);
        for(int i=0; i<edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n, 0);
        return dfs(graph, visited, start, end);
    }
};

int main(){
    DFS_Solution s;
    int n=5;
    vector<vector<int>> edges;
    edges.push_back({0,1});
    edges.push_back({0,2});
    edges.push_back({1,3});
    edges.push_back({2,4});
    int start=0,end=4;
    bool ans=s.validPath(n,edges,start,end);
    if(ans)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}