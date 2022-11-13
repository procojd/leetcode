class Solution {
public:
    string reverseWords(string s) {
       string ans="";
        int j=s.size()-1;
        int i=j;
        while(j>=0)
        {
            if(i==j&&s[i]==' ')
            {
                i--;j--;
            }
            
            else if(iswalnum(s[j]))
            {
                j--;
            }
            else if(s[j]==' '||j==0)
            {
                ans+=s.substr(j+1,i-j);
                ans+=" ";
                j--;
                i=j;
                
            }
            
        }
        
        ans+=s.substr(j+1,i-j);
        while(ans[ans.size()-1]==' ')
            ans.pop_back();
        return ans;
    }
};