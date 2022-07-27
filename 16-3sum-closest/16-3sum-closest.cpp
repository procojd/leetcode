class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int ans = INT_MAX;
        int sum;
        
        for (int i = 0; i < n; i++) {
            int newTarget = target - nums[i];
            int j = i+1, k = n-1;
            
            while (j < k) {
                int temp = nums[j] + nums[k];
                if (abs(temp-newTarget) < ans) {
                    ans = abs(temp-newTarget);
                    sum = temp+nums[i];
                }
                
                if (temp > newTarget) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        
        return sum;
    }
};