class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<cp)
            {
                cp=prices[i];

            }
            else
            {
                int sp=prices[i];
                profit=max(profit,sp-cp);
            }
        }
        return profit;
        
    }
};