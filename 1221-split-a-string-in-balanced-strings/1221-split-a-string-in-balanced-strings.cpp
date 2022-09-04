class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')       // Counting the no of 'R's
                r++;
            else               // If there is a 'L' then decrease the count
                r--;
            if(r==0)        // Check after every iteration if they are forming  a substring
                l+=1;
        }
        return l;   // Return the count of the substrings
    }
};