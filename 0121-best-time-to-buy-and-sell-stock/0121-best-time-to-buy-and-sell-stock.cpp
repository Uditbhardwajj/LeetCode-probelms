class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
         
            int profit = prices[i] - buy;

            maxProfit = max(maxProfit, profit);

            
            buy = min(buy, prices[i]);
        }

        return maxProfit;
    }
};