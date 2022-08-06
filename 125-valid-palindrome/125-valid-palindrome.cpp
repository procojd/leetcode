class Solution {
public:
    bool isPalindrome(string s) {
        string sa;
      for(int i=0;i<s.size();i++) 
      {
          char c;
          c=s[i];
          if(isalpha(c)||isdigit(c))
          {
              if(isalpha(c))
              sa.push_back(tolower(c));
              else sa.push_back(c);
          }
          
      }
        string t=sa;
        reverse(t.begin(),t.end());
        if(t==sa)
            return true;
        return false;
    }
};