class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      int i=grid.size();
        int j=grid[0].size();
        int ans=0;
        for(int row=0;row<i;row++)
        {
            for(int col=0;col<j;col++)
            {
                if(grid[row][col]==1)
                {ans+=4;
                if(row!=0)
                {
                  if(grid[row-1][col])
                      ans--;
                }
                if(row!=i-1)
                {
                    if(grid[row+1][col])
                      ans--;
                }
                if(col!=0)
                {
                  if(grid[row][col-1])
                      ans--;
                }
                if(col!=j-1)
                {
                    if(grid[row][col+1])
                      ans--;
                }}
                
            }
        }
        return ans;
    }
};