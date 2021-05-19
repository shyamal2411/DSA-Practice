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
            DFSRec(adj,s,visited);
}

void printGraph(vector<int> adj[], int v) {
  for (int i = 0; i < v; i++) {
    for (int x : adj[i])
      cout << x << " ";

    cout << endl;
  }
}

void addedge(vector<int> adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

int main(){
  int v = 4;
  vector<int> adj[v];

  addedge(adj, 0, 2);
  addedge(adj, 0, 1);
  addedge(adj, 1, 2);
  addedge(adj, 1, 3);
  printGraph(adj, v);

  return 0;
}

// // A simple representation of graph using STL,
// // for the purpose of competitive programming
// #include <bits/stdc++.h>
// using namespace std;

// // A utility function to add an edge in an
// // undirected graph.
// void addEdge(vector<int> adj[], int u, int v) {
//   adj[u].push_back(v);
//   adj[v].push_back(u);
// }

// // A utility function to do DFS of graph
// // recursively from a given vertex u.
// void DFSUtil(int u, vector<int> adj[], vector<bool>& visited) {
//   visited[u] = true;
//   cout << u << " ";
//   for (int i = 0; i < adj[u].size(); i++)
//     if (visited[adj[u][i]] == false)
//       DFSUtil(adj[u][i], adj, visited);
// }

// // This function does DFSUtil() for all
// // unvisited vertices.
// void DFS(vector<int> adj[], int V) {
//   vector<bool> visited(V, false);
//   for (int u = 0; u < V; u++)
//     if (visited[u] == false)
//       DFSUtil(u, adj, visited);
// }

// // Driver code
// int main() {
//   int V = 5;

//   // The below line may not work on all
//   // compilers. If it does not work on
//   // your compiler, please replace it with
//   // following
//   // vector<int> *adj = new vector<int>[V];
//   vector<int> adj[V];

//   // Vertex numbers should be from 0 to 4.
//   addEdge(adj, 0, 1);
//   addEdge(adj, 0, 4);
//   addEdge(adj, 1, 2);
//   addEdge(adj, 1, 3);
//   addEdge(adj, 1, 4);
//   addEdge(adj, 2, 3);
//   addEdge(adj, 3, 4);
//   DFS(adj, V);
//   return 0;
// }
