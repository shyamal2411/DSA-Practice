class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    // OPTIMAL APPROACH.
    int maxpr = 0;
    int minpr = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
      minpr = min(minpr, prices[i]);
      maxpr = max(maxpr, prices[i] - minpr);
    }
    return maxpr;
  }
};

/*
class Solution {
public:
   int maxProfit(vector<int>& prices) {
  int count = 0, max = 0;
  for (int i = 1; i < prices.size(); i++) {
    count += prices[i] - prices[i - 1];
    if (count < 0)
      count = 0;
    if (count > max)
      max = count;
  }
  return max;
}
};
*/