int maxProfit(vector<int>& prices) {
  int min_price = prices[0];
  int max_profit = 0;
  
  for(int i=1;i<prices.size();i++){
    max_profit = max(max_profit,prices[i]-min_price);
    min_price = min(prices[i],min_price);
  }
  
  return max_profit;
}
