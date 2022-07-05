class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<int>st1,st2;
        int n=s.size(),m=t.size();
        for(int i=0;i<n;i++){
            if(s[i]=='#' && st1.empty()){
                continue;
            }
            else if(s[i]=='#'){
                st1.pop();
            }
            else{
                st1.push(s[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#' && st2.empty()){
                continue;
            }
            else if(t[i]=='#'){
                st2.pop();
            }
            else{
                st2.push(t[i]);
            }
        }
        return st1==st2;
    }
};