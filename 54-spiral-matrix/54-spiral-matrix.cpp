class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        
        while(!matrix.empty()){
            
            // Move right
            for(int j=0; j < matrix[0].size(); j++){
                res.push_back(matrix[0][j]);
            }
            matrix.erase(matrix.begin());
            
            if(matrix.empty())
                    break;
            
            
            // Move down
            for (int i=0; i<matrix.size(); i++){
                res.push_back(matrix[i].back());
                matrix[i].pop_back();
                if (matrix[i].empty()){
                    matrix.erase(matrix.begin()+i);
                    i--;
                }
            }
            
            if(matrix.empty())
                    break;

            
            // Move left
            for (int i=matrix.back().size()-1; i >= 0; i--){
                res.push_back(matrix.back()[i]);
            }
            matrix.pop_back();

            if(matrix.empty())
                    break;

            
            // Move up
            for (int i=matrix.size()-1; i >= 0; i--){
                res.push_back(matrix[i][0]);
                matrix[i].erase(matrix[i].begin());
                if (matrix[i].empty())
                    matrix.erase(matrix.begin()+i);
            }
            
        }
        
        return res;
    }
};