//basic cpp header
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
  vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<int> ans, in(n);
    for(auto edge: edges)
      in[edge[1]]++;
    for(int i=0; i!=n; ++i)
      if(in[i]==0) ans.push_back(i);
    return ans;
  }
};
//program for above class
int main()
{
  vector<vector<int>> edges;
  edges.push_back({0,1});
  edges.push_back({0,2});
  edges.push_back({1,2});
  edges.push_back({2,0});
  edges.push_back({2,3});
  edges.push_back({3,3});
  Solution obj;
  vector<int> ans = obj.findSmallestSetOfVertices(4, edges);
  for(int i=0; i!=4; ++i)
    cout<<ans[i]<<" ";
  cout<<endl;
  return 0;
}