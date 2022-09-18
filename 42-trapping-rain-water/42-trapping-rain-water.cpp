class Solution {
public:
    int trap(vector<int>& height) {
    int n=height.size();
        vector<int>lm(n,0);
        vector<int>rm(n,0);
        lm[0]=0;
        rm[n-1]=0;
      for(int i=1;i<n;i++)
      {
          lm[i]=max(height[i-1],lm[i-1]);
      }
    for(int i=n-2;i>=0;i--)
      {
          rm[i]=max(height[i+1],rm[i+1]);
      }
        int count=0;
      for(int i=0;i<height.size();i++)
      {
          if(min(rm[i],lm[i])>height[i])
          {
              count+=min(rm[i],lm[i])-height[i];
          }
      }
        return count;
    }
};