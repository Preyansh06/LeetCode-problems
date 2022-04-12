class Solution {
public:
    int rowsize,colsize;
    
    int getcount(int row,int col,vector<vector<int>> board)
    {
        int cnt=0;
        cnt+= row-1>=0 && board[row-1][col] ? 1:0;
        cnt+= row+1<rowsize && board[row+1][col] ? 1:0;
        cnt+=row-1 >=0 && col-1>=0 && board[row-1][col-1] ? 1:0;
        cnt+=row-1 >=0 && col+1<colsize && board[row-1][col+1] ? 1:0;
        cnt+= col-1>=0 && board[row][col-1] ? 1:0;
        cnt+= col+1<colsize && board[row][col+1] ? 1:0; 
        cnt+=row+1 <rowsize && col-1>=0 && board[row+1][col-1] ? 1:0;
        cnt+=row+1 <rowsize && col+1<colsize && board[row+1][col+1] ? 1:0;
        
        return cnt;

    }
    void gameOfLife(vector<vector<int>>& board) {
         rowsize=board.size();
         colsize=board[0].size();
        vector<vector<int>> tempboard;
        tempboard = board;
     
        
        for(int i=0;i<rowsize;i++)
        {
            for(int j=0;j<colsize;j++)
            {
              int  livecount = getcount(i,j,tempboard);
                if(board[i][j])
            {
                if(livecount<2 || livecount>3)
                    board[i][j]=0;
            }
            else
            {
                board[i][j] = livecount==3 ? 1:0; 
            }
            }
            
        }
        
    }
};
