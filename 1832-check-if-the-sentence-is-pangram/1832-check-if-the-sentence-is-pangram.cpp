class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<int>v(26,0);
        int total=26;
        for(int i=0;i<sentence.size();i++)
        {
            if(v[sentence[i]-'a']==0)
               { total--;
               v[sentence[i]-'a']++;}
        }
        if(total==0)
            return true;
        return false;
    }
};