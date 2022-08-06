class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(1001,0);
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            ans[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(ans[nums2[i]]!=0)
            {
                v.push_back(nums2[i]);
                ans[nums2[i]]--;
            }
        }
        return v;
        
    }
};