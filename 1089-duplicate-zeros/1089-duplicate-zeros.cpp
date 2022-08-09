class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       int n=arr.size();
        vector<int>ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==n)
                break;
            if(arr[i]!=0)
            {ans.push_back(arr[i]);
             count++;
            }
            else
            {
                ans.push_back(0);
                ans.push_back(0);
                count+=2;
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
        
    }
};