// Check if Graph is Tree or not
// https://www.youtube.com/watch?v=9hWUJZuvvMw&t=236s

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define maxx 101

vi g[maxx];
int vis[maxx] = {0};

bool isCycle(int u, int parent) {
  vis[u] = 1;
  for (auto it : g[u]) {
    if (!vis[it]) {
      if (isCycle(it, u))
        return true;
    } else if (it != parent)
      return true;
  }
  return false;
}

void connectedComponents(int u) {
  vis[u] = 1;
  for (auto it : g[u]) {
    if (!vis[it])
      connectedComponents(it);
  }
}

bool util(int m) {
  bool x = isCycle(0, -1);
  if (x)
    return false;

  memset(vis, 0, sizeof(vis));
  connectedComponents(0);

  f(i, 0, m) {
    if (!vis[i])
      return false;
  }
  return true;
}

int main() {
  int n, m;
  cin >> n >> m;

  memset(vis, 0, sizeof(vis));
  f(i, 0, n) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  bool x = util(m);
  if (x)
    cout << "Graph is Tree";
  else
    cout << "Graph is Not a Tree";

  return 0;
}
/*
Input:
5 5
0 1
1 2
2 0
0 3
3 4
Output: Graph is not a tree.

4 5
3 4
3 0
0 1
0 2
Graph is Tree.
*/