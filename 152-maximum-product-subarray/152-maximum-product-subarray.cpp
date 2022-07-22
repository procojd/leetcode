class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int ans=nums[0];
        int maxans=ans;
        int minans=ans;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(maxans,minans);
            maxans=max(nums[i],maxans*nums[i]);
            minans=min(nums[i],minans*nums[i]);
            ans=max(ans,maxans);
        }
        return ans;
    }       
};