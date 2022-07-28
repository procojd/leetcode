class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>ans(26,0);
        if(s.size()!=t.size())
            return false;
       for(int i=0;i<s.size();i++)
       {
           ans[s[i]-'a']++;
       }
        for(int i=0;i<t.size();i++)
       {
            if(ans[t[i]-'a']==0)
                return false;
           else ans[t[i]-'a']--;
       }
        return true;
    }
};