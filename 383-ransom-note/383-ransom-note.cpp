class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      vector<int>v(26,0);
        for(int i=0;i<magazine.size();i++)
        {
            v[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(v[ransomNote[i]-'a']==0)
                return false;
            else{v[ransomNote[i]-'a']--;}
        }
        return true;
    }
};