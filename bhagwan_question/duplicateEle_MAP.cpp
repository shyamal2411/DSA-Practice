class Solution {
 public:
  int countWords(string list[], int n) {
    int ans = 0;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
      mp[list[i]]++;
    }
    //   for(auto itr=mp.begin();itr!=mp.end();itr++)
    //   {
    //       if(itr->second==2)
    //       ans++;
    //   }
    for (auto& itr : mp) {
      if (itr.second == 2)
        ans++;
    }
    return ans;
  }
};