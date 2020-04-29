class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int indexMin, indexMax;
        if(prices.size())
        {
            indexMax = indexMin = 0;
            for(int i=1;i<prices.size();i++)
            {
                if(prices[indexMax]>=prices[i])
                {
                    profit += prices[indexMax] - prices[indexMin];
                    indexMax = indexMin = i;
                }
                else
                    indexMax = i;
            }
            profit += prices[indexMax] - prices[indexMin];
        }
        return profit;
    }
};