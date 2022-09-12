class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int bd=0;
        int sd=0;
        long profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                sd++;
            }
            else{
                profit+=prices[sd]-prices[bd];
                bd=sd=i;
            }
        }
        profit+=prices[sd]-prices[bd];
        
        return profit;
    }
};