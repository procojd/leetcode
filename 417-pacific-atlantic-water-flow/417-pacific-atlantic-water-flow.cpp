class Solution {
public:
    int n, m;
   
    int d[5] = {0,1,0,-1,0};
    void dfs(vector<vector<int>> &heights, int i, int j, int dir, int prev, vector<vector<int>> &ocean){
        if(i<0 or j<0 or i==n or j==m or ocean[i][j] == 1 or prev>heights[i][j] ){
            return;
        }
        ocean[i][j] = 1;
        for(int a=0; a<4; a++){
            dfs(heights, i+d[a], j+d[a+1], dir, heights[i][j], ocean);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n=heights.size();
        m=heights[0].size();
        
        vector<vector<int>> pacific(n, vector<int>(m,0));
        vector<vector<int>> atlanta(n, vector<int>(m,0));
        
        
        for(int i=0; i<n; i++){
            dfs(heights, i, 0, 0, INT_MIN, pacific);
        }
        for(int i=0; i<m; i++){
            dfs(heights, 0, i, 1, INT_MIN, pacific);
        }
        for(int i=0; i<n; i++){
            dfs(heights, i, m-1, 2, INT_MIN, atlanta);
        }
        for(int i=0; i<m; i++){
            dfs(heights, n-1, i, 3, INT_MIN, atlanta);
        }
        vector<vector<int>> res;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(pacific[i][j] and atlanta[i][j]) res.push_back({i,j});
            }
        }
        return res;
    }
};