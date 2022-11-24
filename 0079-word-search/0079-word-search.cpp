class Solution {
public:
    bool findit(vector<vector<char>>& board,int i,int j, string word,int index)
    {
       if(index==word.size())
           return true;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||
           board[i][j]!=word[index])
            return false;
       char c=board[i][j];
        board[i][j]='*';
        bool res=findit(board,i+1,j,word,index+1)||
            findit(board,i,j+1,word,index+1)||
            findit(board,i-1,j,word,index+1)||
            findit(board,i,j-1,word,index+1);
        board[i][j]=c;
        return res;
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[0].size();j++)
       {
           if(board[i][j]==word[0])
           {
               if(findit(board,i,j,word,0))
                   return true;
           }
       }
           
       }
        return false;
    }
};