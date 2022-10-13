class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len=nums.size();
        int i,low=0,high=len-1;
        while(low<=high)
        {
            int mid =(high +low)/2;
            if(target==nums[mid])
                return mid;
            if (nums[mid] < target)
                low = mid + 1;

            else
                 high = mid - 1;
      } return -1;
        
        
    }
};