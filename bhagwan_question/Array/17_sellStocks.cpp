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