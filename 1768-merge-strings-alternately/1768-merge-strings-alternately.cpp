class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string s="";
        int n=word1.size();
        if(n==0)
            return word2;
        
        int m=word2.size();
        if(m==0)
            return word1;
        int flag=0;
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if(flag==0)
            {
                s+=word1[i++];
                flag=1;
            }
            if(flag==1){
                s+=word2[j++];
                flag=0;
            }
        }
        if(i==n)
        {
            s.append(word2, i, m);
        }
        else s.append(word1, j, n);
        return s;
    }
};