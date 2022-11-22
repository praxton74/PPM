class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int left = 0, right = 1;
        int profit = 0, max_profit = 0;
        while(right < prices.size()) 
        {
            if(prices[left] < prices[right]) 
            {
                profit = prices[right] - prices[left];
                max_profit = max(max_profit, profit);
            }
			// When the price on the left (buying price) > price on the left (selling)
            else 
            {
				// We buy when the stock is cheaper
                 left = right;
            }
            
            right++;
        }
        return max_profit;
    }
};
