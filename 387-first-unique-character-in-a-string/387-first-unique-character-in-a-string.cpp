class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int>v(26,-1);
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a']==-1)
            v[s[i]-'a']=i;
            else v[s[i]-'a']=-2;
        }
        int mini=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(v[i]>=0)
            mini=min(v[i],mini);
        }
        if(mini==INT_MAX)
            return -1;
        return mini;
        
        
    }
};