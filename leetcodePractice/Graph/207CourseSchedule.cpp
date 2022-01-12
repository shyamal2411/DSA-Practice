#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/course-schedule/
class Solution {
public:
    int white = 0; //unvisited
    int grey = 1; //explore incomplete
    int black = 2; //fully explored
    
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
    
        vector<vector<int>> graph(numCourses); // graph for prerequisites adjacency list
        
        vector<int> visited(numCourses, white); //visited track for every node
        
        for(int i = 0; i < pre.size(); i++){
            graph[pre[i][0]].push_back(pre[i][1]);
        } // Fill graph
        
        for(int i = 0; i < numCourses; i++){
            if(visited[i] == white)
                if(!dfs(i, graph, visited))
                    return false; //return false if we detect cycle
        }
        return true;
    }
    
    //returns true if no cycle is detected else false
    bool dfs(int node, vector<vector<int>> &graph, vector<int> &visited){
        visited[node] = grey;
        
        //traversing through parent nodes
        for(int j = 0; j < graph[node].size(); j++){
            
            //if end up in an unexplored node then it is cycle and return false
            if(visited[graph[node][j]] == grey)
                return false;
            
            //explore all unvisited parent node
            if(visited[graph[node][j]] == white)
                if(!dfs(graph[node][j], graph, visited))
                    return false; // if cycle is found, return false
        }
        visited[node] = black;
        return true;
    }
};

int main(){
    Solution s;
    vector<vector<int>> pre = {{1,0},{2,0},{3,1},{3,2}};
    cout<<s.canFinish(4, pre)<<endl;
    return 0;
}

/*
6
[[1,0],[2,1],[3,2],[5,3],[4,5],[0,5]]

Adjacency List: 
Course => Prerequisites Courses
0 => 5
1 => 0
2 => 1
3 => 2
4 => 5
5 => 3

So Graph becomes as below which has cycle 0->1->2->3->5->0 and course schedule not possible
*/