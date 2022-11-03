class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string s1="";
        for(auto i:words)
        {
            s1+=i;
            if(s==s1)
                return true;
                
        }
        return false;
    }
};