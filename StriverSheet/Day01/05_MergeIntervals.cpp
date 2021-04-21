class Solution {
 public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> merged;

    if (intervals.size() == 0) {
      return merged;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> temp =
        intervals[0];  // taking vector and putting first interval into it.

    for (auto it : intervals) {
      if (it[0] <= temp[1])  // checking if first element of 2nd /next interval
                             // > previous
      {
        temp[1] =
            max(it[1], temp[1]);  // merging, max of either the right of current
                                  // interval or right of next interval.
      } else {
        merged.push_back(temp);  // if they're not merging, push the resultant
                                 // of the merged intervals.
        temp = it;               // reassign the value to the temp interval.
      }
    }
    merged.push_back(temp);  // push the last temp to the merged intervals &
                             // return the merged.
    return merged;
  }
};