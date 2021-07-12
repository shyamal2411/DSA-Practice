class Solution {
 public:
  int findCenter(vector<vector<int>>& edges) {
    if (edges[0][1] == edges[1][0] or edges[0][1] == edges[1][1])
      return edges[0][1];
    return edges[0][0];
  }
};
// center node must appear in every node, means the common node of any two edges
// will be our answer 'A center node must appear in every edge' , This is exactly
//the answer