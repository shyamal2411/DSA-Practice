class Solution {
 public:
  int help(vector<int>& prices,
           int i,
           int k,
           bool buy,
           vector<vector<int>>& v) {
    // no stock
    if (i >= prices.size() || k <= 0)
      return 0;
    if (v[i][buy] != -1)
      return v[i][buy];

    // if we are buying then next time we will sell else next time we will buy
    //-prices[i], because bought stock of prices[i], expend money

    if (buy) {
      return v[i][buy] = max(-prices[i] + help(prices, i + 1, k, !buy, v),
                             help(prices, i + 1, k, buy, v));
    }

    // it's time to sell , now decrease k, we have done 1 transaction
    //+prices[i], because we now gain (i.e) sell our stock at rate of prices[i]
    else {
      return v[i][buy] = max(prices[i] + help(prices, i + 1, k - 1, !buy, v),
                             help(prices, i + 1, k, buy, v));
    }
  }

  int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<int>> v(n, vector<int>(2, -1));

    return help(prices, 0, 1, 1, v);
    // buy=1 because we first have to buy in order to sell
    // we can do atmost 1 transaction, so k=1
  }
};

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