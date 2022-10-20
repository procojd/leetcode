class Solution {
public:
    int hIndex(vector<int>& citations) {
       int s=0;
        int end=citations.size()-1;
        int n=citations.size();
        while(s<=end)
        {
            int mid=s+(end-s)/2;
            if(citations[mid]==n-mid)
                return n-mid;
            if(citations[mid]<n-mid)
                s=mid+1;
            else end=mid-1;
        }
       return n-s;
    }
};