class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
      int obs=-prices[0];
        int oss=0;
        for(int i=1;i<prices.size();i++)
        {
            int nbs=0;
            int nss=0;
            if(oss-prices[i]>obs)
            {
                nbs=oss-prices[i];
            }
            else{
               nbs=obs; 
            }
            
            if(obs+prices[i]-fee>oss)
            {
                nss=obs+prices[i]-fee;
            }
            else{
                nss=oss;
            }
            
            oss=nss;
            obs=nbs;
        }
        
        return oss;  
    }
};