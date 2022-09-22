class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      unordered_map<int,int>m;
       m.insert({0,-1});
       int sum=0;
        int maxlength=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum--;
                
            }
            else{
                sum++;
            }
            
            if(sum==0)
            {
                maxlength=max(maxlength,i+1);
            }
            if(m.find(sum)!=m.end())
            {
                maxlength=max(maxlength,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
        return maxlength;
    }
};