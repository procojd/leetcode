class Solution {
public:
    string removeDuplicates(string s) {
      stack<char>st;
        string s1="";
        st.push('0');
        for(auto i:s)
        {
            
            
            if(st.top()==i)
                st.pop();
            else st.push(i);
            
        }
        
        while(st.size()!=1)
        {
            s1.push_back(st.top());
            
            st.pop();
        }
        reverse (s1.begin(),s1.end());
        return s1;
    }
};