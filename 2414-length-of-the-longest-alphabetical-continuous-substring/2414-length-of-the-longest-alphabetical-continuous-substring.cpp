class Solution {
public:
    int longestContinuousSubstring(string s) {
     int count=1;
        if(s.size()==1)
            return count;
    int maxi=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-'0'-(s[i-1]-'0')==1)
            {
                count++;
            }else count=1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};