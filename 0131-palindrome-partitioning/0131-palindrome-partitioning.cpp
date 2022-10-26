class Solution {
public:
    vector<vector<string>>result;
    bool palindrome(string s)
    {
        string s1=s;
        reverse(s1.begin(),s1.end());
        return s1==s;
    }
    void solve(string s,vector<string>temp)
    {
        if(s.size()==0)
        {
            result.push_back(temp);
            return;
        }
        for(int i=0;i<s.size();i++)
        {
            if(palindrome(s.substr(0,i+1)))
            {
                temp.push_back(s.substr(0,i+1));
                solve(s.substr(i+1),temp);
                temp.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
       vector<string>temp;
        solve(s,temp);
        return result;
    }
};