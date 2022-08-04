class Solution {
public:
    void solve(string digits,vector<string>&ans,int index,string mapping[],string output)
    {
       if(index==digits.size())
       {
           ans.push_back(output);
           return;
       }
        
        int value=digits[index]-'0';
        string letters=mapping[value];
        for(int i=0;i<letters.size();i++)
        {
            output.push_back(letters[i]);
            solve(digits,ans,index+1,mapping,output);
            output.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
       vector<string>ans;
        string output;
        if(digits.size()==0)
            return ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,0,mapping,output);
        return ans;
    }
};