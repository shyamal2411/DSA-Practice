#include<bits/stdc++.h> 
using namespace std;

void addedge(vector<int> adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

// CASE-1: SOURCE NODE GIVEN && GRAPH IS CONNECTED
void BFS(vector<int> adj[], int v, int s) {
  bool visited[v + 1];  // 0 based aray, so v+1....
  for (int i = 0; i < v; i++)
    visited[i] = false;
  // mark all the nodes as false, so as to mark true when we visit them

  queue<int> q;       // use queue to keep check on nodes
  visited[s] = true;  // initialize source as true means source visited
  q.push(s);
  // enqueue the source vertex into the queue (in tree we enqueue root, here
  // source as graph can be directional)

  // in tree we used to run loop until queue gets empty,
  // but here graph can be directional, so we run until it gets false (not NULL
  // as in tree)
  while (q.empty() == false) {
    int u = q.front();
    q.pop();
    cout << u << " ";
    for (int v : adj[u]) {
      if (visited[v] == false) {
        visited[v] = true;
        q.push(v);
      }
    }
  }
}

void BFScase2(vector<int> adj[], int v, int s, bool visited[]) {
  bool visited[v + 1];
  for (int i = 0; i < v; i++)
    visited[i] = false;

  queue<int> q;
  visited[s] = true;
  q.push(s);

  while (q.empty() == false) {
    int u = q.front();
    q.pop();
    cout << u << " ";
    for (int v : adj[u]) {
      if (visited[v] == false) {
        visited[v] = true;
        q.push(v);
      }
    }
  }
}

void BFSdis(vector<int> adj[], int v) {
  bool visited[v + 1];
  for (int i = 0; i < v; i++)
    visited[i] = false;
  for (int i = 0; i < v; i++)
    if (visited[i] == false)
      BFScase2(adj, i, visited);
}

// count connected components in an undirected graph
// Popular interview question: Count number of islands in graph.
int BFSdisCount(vector<int> adj[], int v) {
  bool visited[v + 1];
  int count = 0;
  for (int i = 0; i < v; i++)
    visited[i] = false;
  for (int i = 0; i < v; i++)
    if (visited[i] == false) {
      BFScase2(adj, i, visited);
      count++;
    }
  return count;
}
int main() {
  int v = 4;
  vector<int> adj[v];

  addedge(adj, 0, 2);
  addedge(adj, 0, 1);
  addedge(adj, 1, 2);
  addedge(adj, 1, 3);
  return 0;
}