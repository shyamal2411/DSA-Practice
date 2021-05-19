#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:

   vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    queue<int> q;
    vector<int> ans;
    q.push(0);
    visited[0] = true;
    while (!q.empty()) {
      int x = q.front();
      q.pop();
      ans.push_back(x);
      for (int v : adj[x]) {
        if (visited[v] != true) {
          q.push(v);
          visited[v] = true;
        }
      }
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      // 		adj[v].push_back(u);
    }
    // string s1;
    // cin>>s1;
    Solution obj;
    vector<int> ans = obj.bfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}  