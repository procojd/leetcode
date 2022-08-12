class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int add=0;
        int first=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(first==nums[i])
            {
                count+=add;
            }
            if(first!=nums[i])
            {
                first=nums[i];
                add++;
                count+=add;
            }
                
            }
      return count;
        }
      

};