class Solution {
public:
    bool checkvertical(vector<vector<int>>& matrix,int n)
    {
       for(int j=0;j<n;j++)
       {
           vector<int>v(n+1,0);
               for(int i=0;i<n;i++)
               {
                   v[matrix[i][j]]++;
                   if(v[matrix[i][j]]>1)
                       return false;
               }
       }
        return true;
    }
    bool checkhorizontal(vector<vector<int>>& matrix,int n)
    {
        for(int j=0;j<n;j++)
       {
           vector<int>v(n+1,0);
               for(int i=0;i<n;i++)
               {
                   v[matrix[j][i]]++;
                   if(v[matrix[j][i]]>1)
                       return false;
               }
       }
        return true;
        
    }
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(checkvertical(matrix,n)&&checkhorizontal(matrix,n))
            return true;
        return false;
    }
};