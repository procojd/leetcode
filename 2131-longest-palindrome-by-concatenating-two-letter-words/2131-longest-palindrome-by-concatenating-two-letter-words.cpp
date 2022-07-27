class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;//unordered map
        int ans=0;
        
        for(int i=0;i<words.size();i++){
            string str=words[i];
            swap(str[0],str[1]);
            if(mp[str]>0){//if swapped pair found
                ans+=4;
                mp[str]--;
            }
            else{
                mp[words[i]]++;
            }
        }
        
        for(auto x:mp){
            if(x.second>0 and x.first[0]==x.first[1]){//for single palindromic string
                ans+=2;
                break;
            }
        }
        
        return ans;
    }
};