#include<bits/stdc++.h> 
using namespace std;

int solve(vector<vector<int>>& intervals, int point) {
   return count_if(begin(intervals), end(intervals), [&](auto &e) {
        return (e[0] <= point && e[1] >= point);
    });
    /* Alternate approach
    int ans = 0;
    for (auto &e: intervals) {
        if (e[0] <= point && e[1] >= point) ans ++;
    }
    return ans;
    */
}
      
int main(){
    vector<vector<int, int>> intervals = {{1,3}, {2,6}, {8, 10}, {15, 18}};
    // vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = solve(intervals);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

/*
You are given a two-dimensional list of integers intervals and an integer point. 
Each element contains [start, end] represents an inclusive interval.
Return the number of intervals that are intersecting at point.

Constraints
n ≤ 100,000 
where n is the length of intervals
Example 1
Input
intervals = [
    [1, 5],
    [3, 9],
    [4, 8],
    [10, 13]
]
point = 4
Output
3
Explanation
At time 4, there are 3 intervals that are intersecting: [1, 5], [3, 9], [4, 8]
*/
