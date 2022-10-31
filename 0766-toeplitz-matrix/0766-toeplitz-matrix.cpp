class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        if(col==0||row==0)
            return true;
        for(int i=row;i>0;i--)
        {
            for(int j=col;j>0;j--)
            {
                if(matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};