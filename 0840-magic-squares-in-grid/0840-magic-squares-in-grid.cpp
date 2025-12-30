bool fun(vector<vector<int>>& grid, int r , int c){

    if(  (grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2]) != 15) return false; //diagonal check

    if(  (grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c])  != 15) return false;  // 2nd diagonal check

    vector<int> colsum(3,0);
    vector<int> req_colsum = {15,15,15};

    if (grid[r][c] == grid[r+1][c+1]) return false;   // for 5, 5, 5 duplicate edge case;
    if (grid[r][c+1] == grid[r+1][c]) return false;
    
    for (int i = r ; i<r+3; i++){

        int rowsum = 0;
        int col = 0;

        for (int j = c; j<c+3; j++){
            if (grid[i][j] < 1 || grid[i][j] > 9) return false;

            cout<<i<<"  "<<j<<endl;
            colsum[col] += grid[i][j];
            rowsum += grid[i][j];
            col += 1;
        }
        if (rowsum != 15) return false;
    }

    if (colsum != req_colsum ) return false;

    return true;


}


class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = 0;

        for (int i=0; i<rows-2; i++){
            for (int j = 0; j<cols-2; j++){
                if ( fun(grid, i, j) ) cnt +=1;
            }
        }

        return cnt;

    }
};