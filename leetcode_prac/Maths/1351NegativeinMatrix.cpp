class Solution {
 public:
  int countNegatives(vector<vector<int>>& grid) {
    
    //APPROACH-1
    // int count=0;
    //     for(int i=0;i<grid.size();i++)
    //         for(int j=0;j<grid[i].size();j++) //this was the mistake, I
    //         didn't take how many columns to consider!
    //             if(grid[i][j]<0)
    //                 count++;
    //     return count;
    
    //APRROACH-2
    int ans = 0;
    for (const vector<int>& row : grid)
      ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
    return ans;  // revise this approach again.
  }
};