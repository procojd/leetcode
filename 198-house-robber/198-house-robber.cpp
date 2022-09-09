class Solution {
public:
    int rob(vector<int>& nums) {
        int inc=nums[0];
        int exc=0;
        
        for(int i=1;i<nums.size();i++)
        {
            int ninc=exc+nums[i];
            int nexc=max(inc,exc);
            
            exc=nexc;
            inc=ninc;
        }
        return max(exc,inc);
    }
};