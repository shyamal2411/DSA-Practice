class Solution {
 public:
  int countMatches(vector<vector<string>>& items,
                   string ruleKey,
                   string ruleValue) {
    int count = 0;
    for (int i = 0; i < items.size(); i++) {
      if (ruleKey == "type" && items[i][0] == ruleValue)
        count++;
      if (ruleKey == "color" && items[i][1] == ruleValue)
        count++;
      if (ruleKey == "name" && items[i][2] == ruleValue)
        count++;
    }
    return count;
  }
};

/*
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string
ruleValue) { int count=0,pos=0; if(ruleKey[0]=='t') pos=0; else if
(ruleKey[0]=='c') pos=1; else pos=2; for(auto &i:items)
        {
            if(i[pos]==ruleValue)
                count++;
        }
        return count;
    }
};

*/