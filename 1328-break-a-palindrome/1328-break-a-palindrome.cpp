class Solution {
public:
    string breakPalindrome(string p) {
    string ans="";
      if(p.size()==1)
      {
          return ans;
      }
        int flag=0;
        for(int i=0;i<p.size()/2;i++)
        {
            if(p[i]-'a'>0)
            {
                p[i]='a';
                flag=1;
                break;
                
            }
        }
        if(!flag)
            p[p.size()-1]='b';
        return p;
        
    }
};