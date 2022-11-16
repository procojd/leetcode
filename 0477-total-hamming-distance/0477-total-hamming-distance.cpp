class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int total = 0;
        
        for(int i = 0; i < 32; i++){
            int ones = 0, zeros = 0;
            
            for(auto n: nums){
                if(n& (1<<i)){
                    ones++;
                }
                else{
                    zeros++;
                }
            }
            
            total += (ones* zeros);
        }
        
        return total;
    }
};