class Solution {
public:
    int m[201];
    
    int rec(vector<vector<int>>& isConnected, int i){
        if(m[i] == 0) return 0;
        m[i]=0;
        for(int j = 0; j < isConnected.size(); j++){
            if(isConnected[i][j] == 1) rec(isConnected, j);
        }
        return 1;
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        memset(m, -1, sizeof(m));
        int sum = 0;
        for(int i = 0; i < isConnected.size(); i++){
            sum+= rec(isConnected, i);
        }
        return sum;
        
    }
};