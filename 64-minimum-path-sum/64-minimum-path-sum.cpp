class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int m = grid.size()-1;
        int n = grid[0].size()-1;
        vector<vector<int>> v( m+1 , vector<int> (n+1, 0)); 
        for(int i=m;i>=0;i--)
        {
            for(int j=n;j>=0;j--)
            {
                if(i==m&&j==n)
                {
                    v[i][j]=grid[i][j];
                }
                else if(i==m)
                {
                     v[i][j]=v[i][j+1]+grid[i][j];
                }
                else if(j==n)
                {
                     v[i][j]=v[i+1][j]+grid[i][j];
                }
                else {
                    v[i][j]=min(v[i+1][j],v[i][j+1])+grid[i][j];
                }


            }
        }
        return v[0][0];
    }
};