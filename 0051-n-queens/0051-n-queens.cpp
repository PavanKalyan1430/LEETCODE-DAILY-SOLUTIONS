bool is_safe(int row, int col, vector<string>& board, int n){

    int duplicate_row = row;
    int duplicate_col = col;

    while(col>=0){
        if (board[row][col] == 'Q') return false;
        col--;
    }

    col = duplicate_col;

    while(row >=0 and col>=0){
        if (board[row][col] == 'Q') return false;
        row--;
        col--;
    }

    row= duplicate_row;
    col = duplicate_col;


    while(row < n and col>=0 ){
        if (board[row][col] == 'Q') return false;
        row++;
        col--;
    }


    return true;

}


void solve(int col, vector<vector<string>>& result, vector<string>& board, int n ){

    if (col == n){
        result.push_back(board);
        return;
    }


    for (int row = 0; row<n; row++){

        if (is_safe(row, col, board, n)){

            board[row][col] = 'Q';

            solve(col+1, result, board, n);

            board[row][col] = '.' ;

        }

    }

    return;

}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        int col = 0;
        vector<vector<string>> result;
        vector<string> board(n);
        string s = string(n,'.');

        for (int i=0; i<n; i++) board[i] = s;

        solve(col, result, board, n);


        return result;

    }
};