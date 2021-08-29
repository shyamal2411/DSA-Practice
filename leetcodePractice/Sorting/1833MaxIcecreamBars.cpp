class Solution {
 public:
  int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());  // start buying from cheapest & buy until
                                       // you have coins jingling in your pocket.
    for (int i = 0; i < costs.size(); i++) {
      if (coins >= costs[i])  // if you've coins> the the price, the decrease
                              // the coins by the cost.
        coins -= costs[i];
      else
        return i;  // else return the index where we stopped.
    }
    return costs.size();
  }
};