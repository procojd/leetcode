class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int i=0;
        int j=0;
        int maxlen=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                j++;
                maxlen=max(maxlen,j-i);
            }
            else {
                j++;
                i=j;
                
            }
            
        }
        return maxlen;
    }
};