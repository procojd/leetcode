class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 0;
        //row,col pair, BFS Queue
        queue<pair<int,int>> rotQ;
        int qSize = 0;
        int nRow = 0, nCol = 0; // Neighbor rows and columns
        int row = 0, col = 0; // Down,  Up,  Right, Left
        static const int dirCount = 4;
        int directions[dirCount][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        
        // Populate the queue with the initial rotten oranges
        for (auto r = 0; r < grid.size(); r++)
            for (auto c = 0; c < grid[0].size(); c++)
                if (grid[r][c] == 2)
                    rotQ.push({r,c});
        
        // While the there are still oranges to rot
        while(!rotQ.empty()) {
            minutes++;
            qSize = rotQ.size();
            // Loop through every level of oranges using BFS
            for (int i = 0; i < qSize; i++) {
                row = rotQ.front().first;
                col = rotQ.front().second;
                rotQ.pop();
                
                // Look in all directions for fresh oranges
                for (int j = 0; j < dirCount; j++) {
                    nRow = row + directions[j][0];
                    nCol = col + directions[j][1];
                    
                    if (nRow >= 0 && nCol >= 0 && nRow < grid.size() && nCol < grid[0].size()) {
                        // Check if an orange is fresh
                        if (grid[nRow][nCol] == 1) {
                            // Rot the orange and add to queue
                            grid[nRow][nCol] = 2;
                            rotQ.push({nRow,nCol});
                        }
                    }
                }
            }
            if (rotQ.empty()) minutes--; // Nothing added to the queue, you did not rot anything
        }
        
        // Check to make sure there are no fresh oranges left
        for (auto r = 0; r < grid.size(); r++) {
            for (auto c = 0; c < grid[0].size(); c++) {
                if (grid[r][c] == 1) {
                    minutes = -1;
                    break;
                }
            }
        }
        
        return minutes;
    }
};