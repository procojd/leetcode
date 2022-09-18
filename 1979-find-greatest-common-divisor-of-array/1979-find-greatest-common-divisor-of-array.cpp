class Solution {
public:
    int findGCD(vector<int>& nums) {
      int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
            mini=min(nums[i],mini);
        }
        
        while(maxi%mini!=0)
        {
            int temp=maxi%mini;
            maxi=mini;
            mini=temp;
            
        }
        return mini;
        
    }
};