void fun(vector<vector<int>>& grid, int &result, int temp, int i, int j){

    vector<int> dx= {0,-1,0,1};
    vector<int> dy= {1,0,-1,0};
    int rows = grid.size();
    int cols = grid[0].size();

    int t = grid[i][j];
    grid[i][j] = -1;

    result = max(result, temp);


    for (int k=0; k<4 ; k++){
        int nx = i+ dx[k];
        int ny = j+ dy[k];
        
        if (nx>= rows || ny>= cols || nx<0 || ny<0 
            || grid[nx][ny] == -1 || grid[nx][ny] == 0) continue;
        
        fun(grid, result, temp+grid[nx][ny], nx, ny);


    }

    grid[i][j] = t;
    return;

}

class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int temp= 0, result = 0, max_result = 0;
        int rows = grid.size();
        int cols  = grid[0].size();


        for (int i =0; i<rows; i++){
            for (int j = 0; j<cols ; j++){
                if (grid[i][j] != 0){
                    result = grid[i][j];
                    fun(grid, result, result ,i, j);
                    max_result = max(max_result, result);
                }
            }
        }

       return max_result;

        
    }
};