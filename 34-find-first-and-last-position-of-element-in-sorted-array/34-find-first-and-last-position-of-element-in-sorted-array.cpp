class Solution {
public:
    int bsearch(vector<int>& nums, int target)
    {
        int low=0,high=nums.size();
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
                high=mid;
            else low=mid+1;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp=bsearch(nums,target-1);
        int lp=bsearch(nums,target);
        if(fp==lp)
            return {-1,-1};
        else
            return {fp,lp-1};
            
        
        
    }
};