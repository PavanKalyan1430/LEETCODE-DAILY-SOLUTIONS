
bool is_valid(vector<vector<char>>& board, int row, int col, char c){

    for (int i=0; i<9; i++){

        if ( board[row][i] == c) return false;

        if (board[i][col] == c) return false;

        if (board[3 * (row/3) + i/3][3 * (col/3) + i%3] == c ) return false;

    }

    return true;

}



bool solve( vector<vector<char>> & board, int rows, int columns){

    for (int i=0; i<rows; i++){
        for (int j= 0; j<columns; j++){

            if (board[i][j] != '.'){

                char temp = board[i][j];
                board[i][j] = '.';

                if (is_valid(board, i, j, temp) == false)  return false;
                    
                board[i][j] = temp;  
     
            }
        }

    }

    return true;

}


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int rows = 9;
        int columns = 9;

        return solve(board, rows, columns );
    }
};