class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
       
        int maxans=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            
            int m=sentences[i].size();
            for(int j=0;j<m;j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            maxans=max(maxans,count+1);
        }
        return maxans;
    }
};