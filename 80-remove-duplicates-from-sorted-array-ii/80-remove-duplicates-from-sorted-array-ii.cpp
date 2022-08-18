class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums[0];
        int count=1;
        int left=0;
        for(int i=1;i<nums.size();i++)
        {
            if(temp==nums[i])
            {
                if(count<2)
                {
                    count++;
                    temp=nums[i];
                }
                else 
                {nums[i]=INT_MAX;
                 left++;
                }
                
            }
            else {
                temp=nums[i];
                count=1;
            }
            
        }
        sort(nums.begin(),nums.end());
        return nums.size()-left;
    }
};