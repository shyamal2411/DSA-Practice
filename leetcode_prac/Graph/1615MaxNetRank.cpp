#include <bits/stdc++.h>
using namespace std;
/*
Build the graph (adjacency list).
Compute network rank of all pairs of cities.
Simply compute the sum of neighbors (connected cities) of both cities.
Decrement 1 from the computed sum if the cities under consideration are connected to each other.
(Otherwise the road between those 2 cities will be double counted)
Update the maximal network rank if the network rank computed is greater than the current value.
Note:
Used unordered_set in the graph to track neighbors (connected cities) in order to speed up the look up.
(Required to check if the 2 cities under consideration are connected or not)
*/
class Solution {
 public:
  int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    vector<unordered_set<int>> graph(n);

    // Build graph adjacency list.
    for (const auto& road : roads) {
      graph[road[0]].insert(road[1]);
      graph[road[1]].insert(road[0]);
    }

    int maxx = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        // Sum of neighbors -connected cities of both cities.
        int network_rank = graph[i].size() + graph[j].size();

        // Reduce the rank by 1 in case the cities are connected
        if (graph[j].count(i))
          --network_rank;

        // Maximal network rank is the maximum network rank possible.
        maxx = max(maxx, network_rank);
      }
    }
    return maxx;
  }
};

int main() {
  int n;
  cin >> n;
  vector<vector<int>> roads;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> roads[i].push_back(j);
    }
  }
  Solution obj;
  int ans = obj.maximalNetworkRank(n, roads);
  cout << "Maximum network rank is " << ans << endl;
  return 0;
}

// int main()
// {
//     int n;
//     cin>>n;
//     vector<vector<int>> roads;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//              cin>>roads[i].push_back(j);

//     Solution obj;
//     int ans=obj.maximalNetworkRank(n,roads);
//     cout<<"Maximum network rank is "<<ans<<endl;
//     return 0;
// }