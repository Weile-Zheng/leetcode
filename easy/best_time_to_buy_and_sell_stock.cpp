class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0; 
        int profit = 0; 
        for(int i =prices.size()-1; i>=0; i--)
        {
            if(prices[i]> max) max = prices[i];
            else profit = max-prices[i]<profit ? profit:max-prices[i];
        }
        return profit; 
    }
};
