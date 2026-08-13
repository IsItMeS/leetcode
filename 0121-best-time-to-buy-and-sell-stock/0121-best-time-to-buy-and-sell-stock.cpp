class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int i,j;
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(i=0;i<n;i++)
        {
            buy = min(buy,prices[i]);
            profit = max(profit, prices[i]-buy);
        }
        return profit;
    }
};