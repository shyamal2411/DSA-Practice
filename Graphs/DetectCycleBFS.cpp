class Solution {
 public:
  bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited) {
    queue<pair<int, int>> q;
    visited[s] = true;
    q.push({s, -1});

    while (!q.empty()) {
      int node = q.front().first;
      int par = q.front().second;
      q.pop();

      for (auto i : adj[node]) {
        if (!visited[i]) {
          visited[i] = true;
          q.push({i, node});
        } else if (par != i)
          return true;
      }
    }
    return false;
  }

 public:
  bool isCycle(int V, vector<int> adj[]) {
    vector<int> vis(V + 1, 0);
    for (int i = 1; i <= V; i++) {
      if (!vis[i]) {
        if (checkForCycle(i, V, adj, vis))
          return true;
      }
    }
    return false;
  }
};