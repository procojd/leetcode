class Solution {
public:
    int candy(vector<int>& ratings) {
       int n=ratings.size();
       vector<int>l2r(n);
        vector<int>r2l(n);
        l2r[0]=1;
        r2l[n-1]=1;
        int curr=1;
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {   curr++;
                l2r[i]=curr;
            }
            else {
                curr=1;
                l2r[i]=curr;
            }
        }
        curr=1;
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {   curr++;
                r2l[i]=curr;
            }
            else {
                curr=1;
                r2l[i]=curr;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
          sum+=max(l2r[i],r2l[i]);
        }
        return sum;
        
    
        
    }
};