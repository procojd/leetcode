// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int high,low;
        high=n;
        low=1;
        int mid;
        while(low<high)
        {
            mid =low+(high-low)/2;
            if(isBadVersion(mid)==false)
                low=mid+1;
             if(isBadVersion(mid)==true)
                high=mid;
        }
        return low;
    }
};