class Solution {
public:
	vector<int> findBall(vector<vector<int>>& grid) {
		int n=grid.size(), m=grid[0].size();
		vector<int> ans;
		for(int i=0;i<m;i++)
		{
			int r=0,c=i;
			while(r>-1 && r<n && c>-1 && c<m)
			{
				if(grid[r][c]==1 && c+1<m && grid[r][c+1]==1){  r++; c++;  }
				else if(grid[r][c]==-1 && c-1>-1 && grid[r][c-1]==-1){  r++; c--;  }
				else
				{
					ans.push_back(-1);
					break;
				}
				if(r>=n){    ans.push_back(c);   break;   }
			}
		}
		return ans;
	}
};