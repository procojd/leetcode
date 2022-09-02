class Solution {
public:
    bool isvowel(char a)
    {
        char ch=tolower(a);
        
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        if(s.size()==1)
            return s;
       int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(isvowel(s[i])&&isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if(isvowel(s[i]))
            {
                j--;
            }
            else i++;
        }
        return s;
    }
};