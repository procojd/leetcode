class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    
        vector<vector<int>>v;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int>v1;
            v1.push_back(1);
            
            for(int j=0;j<=i-2;j++)
            {
               v1.push_back(v[i-1][j]+v[i-1][j+1]);
            }
            
            if(i!=0)
              v1.push_back(1);
            v.push_back(v1);
            
            
        }
        return v;
    }
};