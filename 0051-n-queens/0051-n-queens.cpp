bool can_place(vector<string>&board , int row, int col , int n){

    for (int i=0; i<col; i++){
        if (board[row][i] == 'Q') return false;
    }

    int dup_row = row;
    int dup_col = col;

    while(row >= 0 && col>= 0){
        if (board[row][col] == 'Q') return false;
        row-=1;
        col-=1;
    }

    row =  dup_row ;
    col =  dup_col ;

    while(row <n  && col>= 0){
        if (board[row][col] == 'Q') return false;
        row+=1;
        col-=1;
    }

    return true;


}


void solve(vector<vector<string>>& result, vector<string>board, int n , int row, int col){

    
    if (col == n){
        result.push_back(board);
        return;
    } 



    for (int i=0; i<n; i++){
        if (board[i][col] == '.'){
            
            if (can_place(board , i, col, n)){
                board[i][col] = 'Q';

                solve(result, board, n, row, col+1);

                board[i][col] = '.';
            }

        }
    }
    return;
    


}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> result;

        vector<string> board(n);
        string s(n,'.');

        //cout<<s<<" ";

        for (int i=0; i<n; i++) board[i] = s;

        solve(result, board, n, 0, 0);

        return result;
    }
};