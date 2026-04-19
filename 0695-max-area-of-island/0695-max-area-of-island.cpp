void dfs(vector<vector<int>>& grid, int i , int j, int &cnt){

    int rows = grid.size();
    int cols = grid[0].size();

    if (i == rows || j == cols || i<0 || j<0 || grid[i][j] != 1) return;

    grid[i][j] = 0;

    cnt+=1;

    dfs(grid, i, j+1, cnt);
    dfs(grid, i-1, j, cnt);
    dfs(grid, i, j-1, cnt);
    dfs(grid, i+1, j, cnt);
}



class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        

        int rows = grid.size();
        int cols = grid[0].size();

        int result = 0;

        for (int i=0; i<rows; i++){
            for (int j=0; j<cols ; j++){

                if (grid[i][j] == 1){
                    int temp_cnt = 0;
                    dfs(grid, i, j, temp_cnt);
                    result = max(result, temp_cnt );
                }

            }
        }

        return result;



    }
};