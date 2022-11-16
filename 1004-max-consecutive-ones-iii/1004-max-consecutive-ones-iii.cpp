class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int count=0;
        int i=0;
        int j=0;
        int maxlen=0;
        while(j<nums.size())
        {
            if(nums[j]==0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[i]==0){
                
                count--;}i++;
            }
        maxlen=max(maxlen,j-i+1);
            j++;
            
        }
        return maxlen;
    }
};