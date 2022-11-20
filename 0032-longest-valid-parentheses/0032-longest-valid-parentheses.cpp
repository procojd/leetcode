class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(i);
            else{
                if(s[i]=='(') st.push(i);
                else{
                    if(s[st.top()]=='(') st.pop();
                    else st.push(i);
                }
            }
        }
        int ans;
        if(!st.empty())
         ans=n-1 - st.top();
        else ans=n;
        while(!st.empty()){
            int a=st.top();
            st.pop();
            if(!st.empty())
            ans=max(ans,a-st.top() -1);
            else ans=max(ans,a-0);
        }
        return ans;
    }
};