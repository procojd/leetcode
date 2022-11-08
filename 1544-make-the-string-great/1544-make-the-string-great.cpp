class Solution {
public:
    string makeGood(string s) {
      stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty())
            
            {if(st.top()-s[i]==32||st.top()-s[i]==-32)
            {
                st.pop();
            }
           else st.push(s[i]);}
            else st.push(s[i]);
            
        }
        string ans="";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};