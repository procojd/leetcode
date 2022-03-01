class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        int i,j;
        for(i=0;i<len;i++){
            for(j=i+1;j<len;j++)
            {if(nums[i]+nums[j]==target)
                    return {i,j};}
        }
        return{-1,-1};
        
    }
};
