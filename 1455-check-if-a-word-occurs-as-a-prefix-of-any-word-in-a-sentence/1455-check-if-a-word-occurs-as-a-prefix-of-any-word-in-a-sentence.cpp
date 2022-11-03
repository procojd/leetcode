class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       int spaces=0;
        string s="";
        if(sentence.find(searchWord)==0)
            return 1;
        for(int i=0;i<sentence.size();i++)
        {
            s.push_back(sentence[i]);
            if(sentence[i]==' '||i==sentence.size()-1)
              {  spaces++;
               if(s.find(searchWord)==0)
               {
                   return spaces;
               }
               s="";
              }
        }
        return -1;
    }
};