void DFS(vector<vector<char>>& board, string word, int rows, int columns, int i, int j , string result, int index, vector<vector<int>> &check, bool& flag){

    if (result == word){
        flag = true;
        return;
    }

    if (i == rows or j == columns or i<0 or j<0 or board[i][j] != word[index] or check[i][j] == true ) return;

    check[i][j] = true;
    DFS(board, word, rows, columns, i, j+1, result+board[i][j], index+1, check , flag);

    DFS(board, word, rows, columns, i-1, j, result+board[i][j], index+1, check, flag );

    DFS(board, word, rows, columns, i, j-1, result+board[i][j], index+1, check, flag );

    DFS(board, word, rows, columns, i+1, j, result+board[i][j], index+1, check, flag );


    check[i][j] = false;

    return ;


}


class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        string result = "";
        bool flag = false;
        int rows = board.size();
        int columns = board[0].size();

        vector<vector<int>> check(rows , vector<int>(columns, false));

        for (int i=0; i<rows; i++){
            for (int j = 0; j<columns ; j++){
                if (board[i][j] == word[0]){
                    (DFS(board, word, rows, columns, i, j, result,0, check, flag));
                }
            }
        }
        

    return flag;

    }
};