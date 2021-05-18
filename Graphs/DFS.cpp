#include<bits/stdc++.h> 
using namespace std;

void DFSRec(vector<int> adj[], int s, bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
        if(visited[u]==false)
          DFSRec(adj, u, visited);
}

void DFS(vector<int> adj[], int v, int s)
{
    bool visited[v];
    for(int i=0; i<v;i++)
        visited[i]=false;
            DFSRec(adj, s);
}

int main(){

return 0;
}