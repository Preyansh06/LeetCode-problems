class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row_freq[9][9] = {0};
    int col_freq[9][9] = {0}; 
    int box_freq[9][9] = {0};
    
    // Case 1 + 2 + 3: check for valid rows, columns, and 3x3 boxes
    int box_index = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == '.') continue;
            if (row_freq[i][board[i][j] - '1'] >= 1 || col_freq[j][board[i][j] - '1'] >= 1)  
                return false; 
            
            row_freq[i][board[i][j] - '1']++;
            col_freq[j][board[i][j] - '1']++;
                    
            box_index = 3 * (i / 3) + j / 3;
            if (box_freq[box_index][board[i][j] - '1'] >= 1) return false;
            box_freq[box_index][board[i][j] - '1']++;
        }
    }
    return true;
    }
};
