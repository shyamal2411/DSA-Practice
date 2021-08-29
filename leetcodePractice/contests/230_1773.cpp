class Solution {
 public:
  int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    
    int i, j, count = 0;
    // from here, fix the index- you want to get, whethere you want type, color
    // or name, and assign that variable to it.
    
    if (ruleKey == "type")
      j = 0;
    if (ruleKey == "color")
      j = 1;
    if (ruleKey == "name")
      j = 2;

    // loop through all the cases and check if that item & rulekey matches the
    // rule value, if yes then count++.
   
    for (i = 0; i < items.size(); i++) {
      if (items[i][j] == ruleValue)
        count++;
    }
    return count;
  }
};