class Solution {
public:
    int minSetSize(vector<int>& arr) {
      vector<int>v(100001,0);
        int as=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            v[arr[i]]++;
        }
        sort(v.begin(),v.end());
        int n=v.size()-1;
        int count=0;
        int index=0;
        for(int i=n;i>=n/2;i--)
        {
            if(index>=as/2)
                break;
            else{
             count++;
            index+=v[i];
            }
            
        }
        return count;
    }
};