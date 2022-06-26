class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=prices[prices.size()-1];
        int maxpr=0;
        for(int i=prices.size()-1;i>0;i--)
        {
            if(prices[i]<prices[i-1])
            {  curr=max(prices[i-1],curr);
             continue;
            }
            else{
                maxpr=max(curr-prices[i-1],maxpr);
            }
            
            
            
        }
        return maxpr;
    }
};