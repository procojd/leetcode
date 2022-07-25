class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      int n=indices.size();
        string ans(n,' ');
        for(int i=0;i<s.size();i++)
        {
            
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};