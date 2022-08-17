class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string s;
        unordered_set<string>map;
        for(int i=0;i<words.size();i++)
        {
            s="";
            string temp=words[i];
            for(int j=0;j<temp.size();j++)
            {
                s+=v[words[i][j]-'a'];
            }
            
            map.insert(s);
        }
        return map.size();
    }
};