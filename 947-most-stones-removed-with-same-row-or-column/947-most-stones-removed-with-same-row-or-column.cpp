class Solution {
public:
    vector<int>parent;
    vector<int> rank;
    int removeStones(vector<vector<int>>& stones) {
      
      int n = stones.size();
      if(n <= 1) return 0;

      for(int i = 0 ; i < n ; i++) { parent.push_back(i); rank.push_back(0);}
      
      int result = n;
      for(int i = 0 ; i < n ; i++)
      {
        for(int j = i+1; j < n ; j++)
        {
          if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
          {
            result -= unionRank(i , j);  
          }
        }
      }
      return n - result; 
      
    }
  
    int find (int x)
    {
      if(parent[x] == x) return x;
      return find(parent[x]);
    }
  
    int unionRank(int x , int y)
    {
      int parentx = find(x);
      int parenty = find(y);
      
      if(parentx == parenty) return 0;
      if(rank[parentx] >= rank[parenty])
      {
        parent[parenty] = parentx;
        rank[parentx]++;
      }
      else
      {
        parent[parentx] = parenty;
        rank[parenty]++;
      }
      return 1;
    }
};