bool can_solve(vector<vector<char>>& board,int i, int j,  char c){

    for (int k=0; k<9; k++){

        if (board[k][j] == c) return false;

        if (board[i][k] == c ) return false;

        int ro = (i/3) * 3 + (k/3);
        int co = (j/3) * 3 + k % 3;

        if (board[ro][co] == c) return false;

    }

    return true;

}




bool solve (vector<vector<char>>& board, int rows, int col, int i, int j){

    if (i == rows-1 && j== col ) return true;

    if (j == col){
        j = 0;
        i+=1;
    }

    if (i >= rows ) return true;


   // cout<<i<<" "<<j<<endl;


        if (board[i][j] == '.'){
            for (char c = '1'; c<='9'; c++){
                
                if ( can_solve(board,i,j, c) == true ){
                    board[i][j] = c;

                    if (solve(board, rows, col,i, j+1) == true) return true;
                    board[i][j] = '.';
                }

            }

            return false;

        }

        else {
            return solve(board, rows, col,i, j+1);
        }




}




class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        int rows = board.size();
        int col = board[0].size();
        int i = 0;
        int j = 0;

        solve(board, rows, col, i, j);

    }
};