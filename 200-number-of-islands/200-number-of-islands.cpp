class Solution {
public:
    void dfs(vector<vector<char>>&grid, int i, int j){
      if(i==-1 or i==grid.size() or j == -1 or j == grid[0].size() or grid[i][j] == '0' or grid[i][j] == 'X')
        return;
      grid[i][j] = 'X';
      dfs(grid, i+1, j);
      dfs(grid, i-1, j);
      dfs(grid, i, j+1);
      dfs(grid, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
      int ans = 0;
      for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
          if(grid[i][j] == 'X' or grid[i][j] == '0') continue;
          ans++;
          dfs(grid, i, j);
        }
      }
      return ans;
    }
};